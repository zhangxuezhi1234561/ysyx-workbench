#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define ZEROPAD 1
#define SIGN		2
#define PLUS		4
#define SPACE		8
#define LEFT		16
#define SPECIAL	32
#define	LARGE		64

#define is_digit(c) ((c) >= '0' && (c) <= '9')

static char *digits = "0123456789abcdefghijklmnopqrstuvwxyz";
static char *upper_digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//void putch(char ch);
//
int power(int n, int m){
	int result = 1;
	for(int i = 0;i < m; i++){
		result *= n;
	}
	return result;
}

static int skip_atoi(const char **s) {
	int i = 0;
	while (is_digit(**s)) i = i*10 + *((*s)++) - '0';
	return i;
}

static size_t strnlen(const char *s, size_t count) {
	const char *sc;
	for(sc = s; *sc != '\0' && count--; ++sc);
	return sc - s;
}

static char *number(char *str, long num, int base, int size, int precision, int type) {
	char c, sign, tmp[66];
	char *dig = digits;
	int i;

	if(type & LARGE)	dig = upper_digits;
	if(type & LEFT)		type &= ~ZEROPAD;
	if(base < 2 || base >36) return 0;

	c = (type & ZEROPAD) ? '0' : ' ';
	sign = 0;
	if(type & SIGN){
		if(num < 0) {
			sign = '-';
			num	 = -num;
			size--;
		}else if(type & PLUS) {
			sign = '+';
			size--;
		}else if(type & SPACE) {
			sign = ' ';
			size--;
		}
	}

	if(type & SPECIAL){
		if(base == 16){
			size -= 2;
		}else if(base == 8) {
			size--;
		}
	}

	i = 0;

	if(num == 0){
		tmp[i++] = '0';
	}else{
		while(num != 0) {
			tmp[i++] = dig[((unsigned long) num) % (unsigned) base];
			num = ((unsigned long) num) / (unsigned) base;
		}
	}

	if(i > precision) precision = i;
	size -= precision;
	if(!(type & (ZEROPAD | LEFT))) while(size-- > 0) *str++ = ' ';
	if(sign) *str++ = sign;

	if(type & SPECIAL){
		if(base == 8) {
			*str++ = '0';
		}else if(base == 16){
			*str++ = '0';
			*str++ = digits[33];
		}
	}

	if(!(type & LEFT)) while(size-- > 0) *str++ = c;
	while(i < precision--) *str++ = '0';
	while(i-- > 0) *str++ = tmp[i];
	while(size-- > 0) *str++ = ' ';

	return str;
}
int printf(const char *fmt, ...) {
	va_list args;
	va_start(args, fmt);
	char out[100];
	vsprintf(out, fmt, args);
	int len = strlen(out);
	for(int i = 0; i < len; i++){
		putch(out[i]);
	}
	va_end(args);
	return 0;
	//  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
	char *str;
	int flags;
	int len;
	int i, base;
	unsigned long num;
	char *s;

	int field_width;
	int precision;
	int qualifier;

	for(str = out; *fmt; fmt++){
		if(*fmt != '%'){
			*str++ = *fmt;
			continue;
		}
		// Process flags
		flags = 0;
repeat:
		fmt++;
		switch(*fmt) {
			case '-': flags |= LEFT; goto repeat;
			case '+': flags |= PLUS; goto repeat;
			case ' ': flags |= SPACE; goto repeat;
			case '0': flags |= ZEROPAD; goto repeat;
		}

		//Get field width
		field_width = -1;
		if(is_digit(*fmt)) {
			field_width = skip_atoi(&fmt);
		}else if(*fmt == '*') {
			fmt++;
			field_width = va_arg(ap, int);
			if(field_width < 0) {
				field_width = -field_width;
				flags |= LEFT;
			}
		}

		//Get the precision
		precision = -1;
		if(*fmt == '.'){
			++fmt;
			if(is_digit(*fmt)) {
				precision = skip_atoi(&fmt);
			}else if (*fmt == '*') {
				++fmt;
				precision = va_arg(ap, int);
			}
			if (precision < 0) precision = 0;
		}

		//Get the conversion qualifier
		qualifier = -1;
		if(*fmt == 'h' || *fmt == 'l' || *fmt == 'L') {
			qualifier = *fmt;
			fmt++;
		}

		//Default base
		base = 10;

		switch (*fmt) {
			case 's':
				s = va_arg(ap, char*);
				if(!s) s = "<NULL>";
				len = strnlen(s, precision);
				if(!(flags & LEFT)) while(len < field_width--) *str++ = ' ';
				for(i = 0; i < len; ++i) *str++ = *s++;
				while(len < field_width--) *str++ = ' ';
				continue;
			case 'd':	
			case 'i':
				flags |= SIGN;
				break;
			default:
				if(*fmt != '%') *str++ = '%';
				if(*fmt) {
					*str++ = *fmt;
				}else {
					--fmt;
				}
				continue;
		}

		if(qualifier == 'l') {
			num = va_arg(ap,unsigned long);
		}else if(qualifier == 'h'){
			if(flags & SIGN){
				num = va_arg(ap, int);
			}else {
				num = va_arg(ap, unsigned int);
			}
		}else if(flags & SIGN) {
			num = va_arg(ap, int);
		}else {
			num = va_arg(ap, unsigned int);
		}

		str = number(str, num, base, field_width, precision, flags);
	}
	*str = '\0';
	return str - out;
	//  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	va_list args;
	int n;
	
	va_start(args, fmt);
	n = vsprintf(out, fmt, args);
	va_end(args);
	
	return n;
//  panic("Not implemented");
}


int vsnprintf(char *out, size_t n, const char *fmt, va_list ap);
int snprintf(char *out, size_t n, const char *fmt, ...) {
	int result;
	va_list ap;
	va_start(ap, fmt);
	result = vsnprintf(out, n, fmt, ap);
	va_end(ap);
	return result;
//  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	char *buf =	NULL;
	int result = vsprintf(buf, fmt, ap);

	if(!buf)
		return -1;
	if(result < 0){
		free(buf);
		return -1;
	}

	result = strlen(buf);
	if(n > 0){
		if((long)n > result)
			memcpy(out, buf, result+1);
		else
		{
			memcpy(out, buf, n-1);
			out[n-1] = 0;
		}
	}
	free(buf);
	return result;
	
	//  panic("Not implemented");
}

#endif
