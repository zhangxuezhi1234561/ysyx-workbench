#include <proc.h>
#include <elf.h>
#include <fs.h>
// #include <assert.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__riscv)
# define EXPECT_TYPE EM_RISCV
#else
# error Unsupported ISA
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  Elf_Ehdr  *elf_header = (Elf_Ehdr *)malloc(sizeof(Elf_Ehdr));
  Elf_Phdr  *Phdr;
  void* loader_pg;
  int fd = fs_open(filename, 0, 0);
  fs_read(fd, (void *)elf_header, sizeof(Elf_Ehdr));
  //ramdisk_read(elf_header, 0, sizeof(Elf_Ehdr));

  assert(*((uint32_t *)elf_header->e_ident) == 0x464c457f);
  assert(elf_header->e_machine == EXPECT_TYPE);

  Phdr = (Elf_Phdr *)malloc(sizeof(Elf_Phdr) * elf_header->e_phnum);
  fs_lseek(fd, elf_header->e_phoff, SEEK_SET);
  fs_read(fd, Phdr, sizeof(Elf_Phdr) * elf_header->e_phnum);
  //ramdisk_read(Phdr, elf_header->e_phoff, sizeof(Elf_Phdr) * elf_header->e_phnum);
  for(int i = 0; i < elf_header->e_phnum; i++){
    if(Phdr[i].p_type == PT_LOAD){
      loader_pg = (void *)(Phdr[i].p_vaddr & 0xfffff000);

#ifdef HAS_VME
      uintptr_t vaddr_start = (uintptr_t)(loader_pg); 
      uintptr_t vaddr_end   = ((uintptr_t)Phdr[i].p_vaddr + Phdr[i].p_memsz - 1) & 0xfffff000;
      uintptr_t pgnum = (vaddr_end - vaddr_start) >> 12;
      if((Phdr[i].p_vaddr + Phdr[i].p_memsz) & 0xfff) {
        pgnum++;
      }
      if(Phdr[i].p_vaddr & 0xfff) {
        pgnum++;
      }
      loader_pg = new_page(pgnum);
      for(int j = 0; j < pgnum; j++) {
        map(&pcb->as, (void*)vaddr_start + PGSIZE * j, (void*)loader_pg + PGSIZE * j, _PAGE_PRESENT | _PAGE_WRITE);
      }
      pcb->max_brk = vaddr_end + PGSIZE;
      // printf("vaddr_start: 0x%lx, vaddr_end: 0x%lx\n", vaddr_start, vaddr_end);
#endif

      loader_pg += (Phdr[i].p_vaddr & 0xfff);
      fs_lseek(fd, Phdr[i].p_offset, SEEK_SET);
      fs_read(fd, loader_pg, Phdr[i].p_filesz);
      //ramdisk_read(loader_pg, Phdr[i].p_offset, Phdr[i].p_filesz);
      memset(loader_pg + Phdr[i].p_filesz, 0, Phdr[i].p_memsz - Phdr[i].p_filesz);
   //   printf("***%p %d\n", Phdr[i].p_vaddr, Phdr[i].p_offset);
      //return Phdr[i].p_vaddr;
    }
  }
  fs_close(fd);
 //printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!%x %x %x %x\n", elf_header->e_ident[0], elf_header->e_ident[1], elf_header->e_ident[2], elf_header->e_ident[3]);
  printf("linked at 0x%lx\n", elf_header->e_entry);

  return elf_header->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

void context_kload(PCB *pcb, void *entry, void *arg) {
  Area kstack = {(void*)pcb->stack, (void*)pcb->stack + STACK_SIZE};
  pcb->cp = kcontext(kstack, entry, arg);
}

int strnum(char *str[]){
  int num = 0;
  if(str){
    while(str[num] != NULL) {
      num++;
    }
  }
  return num;
}

void context_uload(PCB *pcb, char *filename, char *const argv[], char *const envp[]) {
 
  printf("------filename: %s\n", filename);
  
  //----------- apply user stack 32Kb ----------//
  uintptr_t ustack_base = (uintptr_t)new_page(8);
  uintptr_t ustack = ustack_base + 8 * PGSIZE;    // stack top pointer
  // if(envp){
  //   printf("------envp[0]: %s\n", envp[0]);
  // }
//------------- map the 32KB user stack -------------//
#ifdef HAS_VME
  protect(&pcb->as);
  for(int i = 0; i < 8; i++) {
    map(&pcb->as, pcb->as.area.end - 8 * PGSIZE + i * PGSIZE, (void*)ustack_base + i * PGSIZE, _PAGE_PRESENT);
  }
#endif

//---------- get args --------- //
  char **p_argv = (char **)argv;
  char **p_envp = (char **)envp;

  int argc = strnum(p_argv);
  int envpc = strnum(p_envp);

  int len_argv = 0;     // string area
  for(int i = 0; i < argc; i++){
    len_argv += (strlen(argv[i]) + 1);
  }
  
  int len_envp = 0;
  for(int i = 0; i < envpc; i++) {
    len_envp += (strlen(envp[i]) + 1);
  }

//------- calculate the total len, from stack top down ----------//
  int total_len = (1 + argc + 1 + envpc + 1) * sizeof(uintptr_t) + len_argv + len_envp;

  int str_ptr = ustack - total_len;
  uintptr_t argv_ptr = ustack - len_argv - len_envp;
// printf("------argc: %d, uintptr_t*: %d\n", argc, sizeof(uintptr_t));
  *(uintptr_t*)str_ptr = argc;
  str_ptr += 4;
  for(int i = 0; i < argc; i++) {
    *(uintptr_t*)str_ptr = argv_ptr;
    strcpy((char*)argv_ptr, argv[i]);
    str_ptr += sizeof(uintptr_t);
    argv_ptr += (strlen(argv[i]) + 1);
  }
  
  str_ptr += sizeof(uintptr_t);
  //argv_ptr++;

  
  for(int i = 0; i < envpc; i++) {
    *(uintptr_t*)str_ptr = argv_ptr;
    strcpy((char*)argv_ptr, envp[i]);
    str_ptr += sizeof(uintptr_t);
    argv_ptr += (strlen(envp[i]) + 1);
  }

  uintptr_t entry = loader(pcb, filename);
  // if(argv) printf("------argv: %s, envpc: %d\n", argv[0], 1);
  Area kstack = {(void *)pcb->stack, (void *)pcb->stack + STACK_SIZE};
  pcb->cp = ucontext(&pcb->as, kstack, (void *)entry);
  pcb->cp->GPRx = (uintptr_t)ustack - total_len;
  
  // if(argv) printf("------argc: %s, envpc: %d\n", argv[0], envpc);
}
