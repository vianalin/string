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


