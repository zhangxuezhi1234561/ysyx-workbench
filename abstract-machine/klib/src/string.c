#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	assert(s!=NULL);
	size_t len = 0;
	while(*s++ != '\0')
	{
		len++;
	}
	return len;
//  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
	assert(dst != NULL && src != NULL);
	char* ret = dst;
	while ((*dst++ = *src++) != '\0');
	return ret;
//  panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
	assert(dst != NULL && src != NULL);
	char* ret = dst;

	int i = 0;
	for(i = 0; i < (int)n; i++)
		*dst++ = *src++;
	return ret;
//  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
	assert(dst && src);
	char* ret = dst;
	while(*dst != '\0') {
		dst++;
	}
	while((*dst++ = *src++) != '\0');
	return ret;
	//  panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
	assert(s1 != NULL && s2 != NULL);
	while(*s1 == *s2){
		if(*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return *(const unsigned char*)s1 - *(const unsigned char*)s2;
//  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
	assert((s1 != NULL) && (s2 != NULL));
	while((n-->0) && (*s1 == *s2)){
		if(*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return *(const unsigned char*)s1 - *(const unsigned char*)s2;
//  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
	unsigned char* p = s;
	while(n--){
		*p++ = (unsigned char)c;
	}
	return s;
	//	panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
	assert(dst != NULL || src != NULL);
	if(dst < src){
		char *p = (char *)dst;
		char *q = (char *)src;
		while(n--)
		{
			*p++ = *q++;
		}
	}
	else{
		char *p = (char *)dst + n;
		char *q = (char *)src + n;
		while(n--)
		{
			*--p = *--q;
		}
	}
	return dst;
//  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
	assert(out != NULL && in != NULL);
	char *p = (char*)out;
	char *q = (char*)in;
	if(p == q)
		return p;
	while(n--){
		*p++ = *q++;
	}
	return out;
	//  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
	const char *p = (const char *)s1;
	const char *q = (const char *)s2;
	for(int i = 0;i < n;i++){
		if(*(p+i) > *(q+i))
			return 1;
		else if(*(p+i) < *(q+i))
			return -1;
	}
	return 0;
	//  panic("Not implemented");
}

#endif
