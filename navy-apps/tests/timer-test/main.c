#include<stdio.h>
#include<assert.h>
#include<sys/time.h>
#include<string.h>

#define NDL

#ifdef NDL
	#include<NDL.h>
#endif

int main(){

	#ifndef NDL
	struct timeval tv;
	time_t navy_boot_time = 0;

	
	gettimeofday(&tv, NULL);
	navy_boot_time = tv.tv_sec;
	struct timeval last_tv = {0};

	while(1){
		if(!gettimeofday(&tv, NULL)){
			//assert(0);
			tv.tv_sec -= navy_boot_time;
			//printf("-------%lds\n", tv.tv_sec);
			if(((tv.tv_sec * 10 + tv.tv_usec / 100000) - (last_tv.tv_sec * 10 + last_tv.tv_usec / 100000) > 5)){
				printf("now sec: %ld, now usec: %ld\n", tv.tv_sec, tv.tv_usec);
				memcpy(&last_tv, &tv, sizeof(struct timeval));
			}
		}
	}
	#else
	uint32_t ndl_ticks = 0;
	uint32_t last_ndl_ticks = 0;
	//uint32_t ndl_boottime = NDL_GetTicks();
	NDL_Init(0);
	
	while(1){
		ndl_ticks = NDL_GetTicks();
		if(ndl_ticks - last_ndl_ticks > 500){
			printf("now msec: %u\n", ndl_ticks);
			last_ndl_ticks = ndl_ticks;
		}
	}
	#endif
	return 0;
}
