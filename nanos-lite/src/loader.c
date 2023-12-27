#include <proc.h>
#include <elf.h>
#include <fs.h>

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
      loader_pg = (void *)(Phdr[i].p_vaddr);
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

  return elf_header->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

