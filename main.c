#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	char s1[100];
	char s2[100] = "hello";
	char s3[100] = "goodbye";
	
	printf("start strings: \n");
	printf("s1: [%s] \n", s1);
	printf("s2: [%s] \n", s2);
	printf("s3: [%s] \n", s3);
	
	printf("\n");
	
	printf("testing strlen(s2): \n");
	printf("[standard]: \t %lu \n", strlen(s2));
	printf("[mine]: \t %d \n", mystrlen(s2));
}

int mystrlen(char *s) {
	int len = 0; 
	while(*s) {
		s++;
		len++;
	} 
	return len;
}


