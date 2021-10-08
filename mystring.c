#include <stdio.h>

int mystrlen(char *s) {char * mystrcat( char *dest, char *source);
	int len = 0; 
	while(*s) {
		s++;
		len++;
	} 
	return len;
}

char * mystrcpy(char *dest, char *source) {
	int i;
	for(i = 0; *(source + i) != '\0'; i++) {
		*(dest + i) = *(source + i);
	}
	return dest;
}

char * mystrcat(char *dest, char *source) {
    int destlen;
    int i;
    for(i = 0, destlen = mystrlen(dest); *(source + i) != '\0'; i++, destlen++) {
    	*(dest + destlen) = *(source + i);
    }
    *(dest + destlen) = *(source + i);
    return dest;
}

int mystrcmp(char *s1, char *s2) {
	while(*s1) {
		if(*s1 > *s2) return 1; 
		else if(*s1 < *s2) return -1;
		else {
			s1++;
			s2++;
		}
	}
	if(*s1 == *s2) return 0;
	return -1;
}

char * mystrchr(char *s, char c) {
	while(*s) {
		if(*s == c) {
			return s;
		}
		s++;
	}
	if(c == 0) return s;
	return NULL;
}

