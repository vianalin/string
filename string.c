int mystrlen(char *s) {
	int len = 0; 
	while(*s) {
		s++;
		len++;
	} 
	return len;
}

