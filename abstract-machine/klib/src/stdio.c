#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

//void putch(char ch);
//
int power(int n, int m){
	int result = 1;
	for(int i = 0;i < m; i++){
		result *= n;
	}
	return result;
}
int printf(const char *fmt, ...) {
	va_list args;
	va_start(args, fmt);

	while(*fmt != '\0'){
		if(*fmt == '%'){
			fmt++;
			switch(*fmt == '%'){
				case 'd':{
									 int num = va_arg(args, int);
									 if(num < 0){
										 putch('-');
										 num = -num;
									 }
									 int len = 0;
									 int temp = num;
									 while(temp > 0){
										 len++;
										 temp /= 10;
									 }
									 for(int i = len - 1;i >= 0;i-- ){
										 putch('0' + num / power(10,i) % 10);
									 }
										break;
								 }
				case 's':{
									 char *str = va_arg(args, char*);
									 putch(*str);
									 str++;
									 break;
								 }
				default:{
									putch('%');
								}
			}
		}
		else{
			putch(*fmt);
		}
		fmt++;
	}
	va_end(args);
	//  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
//  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
