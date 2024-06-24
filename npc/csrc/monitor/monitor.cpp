#include <stdio.h>
#include <common.h>
#include <getopt.h>

char *img_file = NULL;
char *diff_so_file = NULL;
int difftest_port = 1234;

static long load_img() {
    if(img_file == NULL) {
        Log("No image is given.");
        assert(0);
    }

    FILE *fp = fopen(img_file, "rb");
    Assert(fp, "Can not open '%s'", img_file);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    Log("The image is %s, size = %ld", img_file, size);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);

    assert(ret == 1);

    fclose(fp);
    return size;
}

static int parse_args(int argc, char *argv[]) {
    const struct option table[] = {
        {"img"      , required_argument, NULL, 'i'},    //--img
        {"diff"     , required_argument, NULL, 'd'},
        {0          , 0                , NULL,  0 },
    };
    int o;
    while((o = getopt_long(argc, argv, "i:d:", table, NULL)) != -1) {
        switch(o) {
            case 'i': img_file = optarg; break;
            case 'd': diff_so_file = optarg; break;
            default : assert(0);
        }
    }
    return 0;
}

long img_size;
void init_monitor(int argc, char *argv[]) {
    parse_args(argc, argv);
    img_size = load_img();
    Log("difftest file %s", diff_so_file);
    // init_difftest(diff_so_file, img_size, difftest_port);
    return;
}