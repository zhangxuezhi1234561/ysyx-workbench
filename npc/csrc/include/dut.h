#ifndef     __DUT_H__
#define     __DUT_H__

enum {DIFFTEST_TO_DUT, DIFFTEST_TO_REF};

void init_difftest(char *ref_so_file, long img_size, int port);
void checkregs(uint32_t *ref, vaddr_t pc);

extern uint32_t ref_r[33];

extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);

extern char *diff_so_file;
extern char *img_file;
extern long img_size;
extern int difftest_port;
extern void ref_reg_display(uint32_t *ref);


#endif