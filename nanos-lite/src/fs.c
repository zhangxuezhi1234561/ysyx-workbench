#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
#include "files.h"
  {"/dev/events", 0, 0, events_read, NULL},
  {"/dev/fb", 0, 0, invalid_read, fb_write},
  {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
  int fd = fs_open("/dev/fb", 0, 0);
  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  int w = cfg.width;
  int h = cfg.height;
  file_table[fd].size = w * h;
}

#define File_Size sizeof(file_table)/sizeof(file_table[0])
static size_t file_open_offset[File_Size] = {0};

int fs_open(const char *pathname, int flags, int mode){
  int ret = -1;
  //printf("File_Size is %d, pathname is %s\n", File_Size, pathname);
  for(int i = FD_FB; i < File_Size; i++){
    if(strcmp(pathname, file_table[i].name) == 0){
      file_open_offset[i] = 0;
      ret = i;
      break;
    }
  }
  // assert(ret != -1);
  Assert(ret != -1, "pathname: %s\n", pathname);
  return ret;
}

size_t fs_read(int fd, void *buf, size_t len){
  Assert(fd >= 0 && fd < File_Size, "[fs read] error, fd: %d, buf: 0x%p, len: %d", fd, buf, len);
  size_t ret = 0;
  switch(fd){
    case FD_STDIN:
    case FD_STDOUT:
    case FD_STDERR:
      assert(0);
      break;
    default:
      if(file_table[fd].read){
        ret = file_table[fd].read(buf, file_open_offset[fd], len);
        //printf("****%s\n", buf);
      }
      else{
        if(file_open_offset[fd] + len >= file_table[fd].size){
          len = file_table[fd].size - file_open_offset[fd];
        }
        ramdisk_read(buf, file_open_offset[fd] + file_table[fd].disk_offset, len);
        file_open_offset[fd] += len;   
        ret = len;
      }
      break; 
  }
  return ret;
}

size_t fs_write(int fd, const void *buf, size_t len){
  Assert(fd >= 0 && fd < File_Size, "[fs write] error, fd: %d, buf: 0x%p, len: %d", fd, buf, len);  
  size_t ret = 0;
  switch(fd){
    case FD_STDIN: 
      panic("Be carefull!!!!!!!!!!!!!!!\n");
      break;
    case FD_STDOUT:
    case FD_STDERR:
      //assert(0);
      //Log("size is %d", File_Size);
      if(file_table[fd].write){
        ret = file_table[FD_STDERR].write(buf, 0, len);
      }
      else{
        assert(0);
      }   
      //file_open_offset[fd] += len;
      break;
    default:
      if(file_table[fd].write){
        ret = file_table[fd].write(buf, file_open_offset[fd], len);
        //file_open_offset[fd] += len;
      }
      else{
        if(file_open_offset[fd] + len >= file_table[fd].size){
          len = file_table[fd].size - file_open_offset[fd];
        }
        ramdisk_write(buf, file_open_offset[fd] + file_table[fd].disk_offset, len);
        file_open_offset[fd] += len;
        ret = len;
      }
      break;
  }
  return ret;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  Assert(fd >= 0 && fd < File_Size, "[fs lseek] error, fd: %d", fd);    
  switch(whence){
    case SEEK_SET:
      file_open_offset[fd] = offset;
      break;
    case SEEK_CUR:
      file_open_offset[fd] += offset;
      break;
    case SEEK_END:
      file_open_offset[fd] = file_table[fd].size;
      break;
    default:
      assert(0);
  }
  assert(file_open_offset[fd] >= 0 && file_open_offset[fd] <= file_table[fd].size);
  return file_open_offset[fd];
}

int fs_close(int fd){
  file_open_offset[fd] = 0;
  return 0;
}

char* get_file_name(int fd){
  return file_table[fd].name;
}
