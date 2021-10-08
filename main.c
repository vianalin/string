#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystring.h"

int main() {

	char s1[100];
	char s2[100] = "hello";
	char s3[100] = "goodbye";
	
	//printf("start strings: \n");
	//printf("s1: [%s] \n", s1);
	//printf("s2: [%s] \n", s2);
	//printf("s3: [%s] \n", s3);
	
	//printf("\n");
	
	//printf("testing strlen(s2): \n");
	//printf("[standard]: \t %lu \n", strlen(s2));
	//printf("[mine]: \t %d \n", mystrlen(s2));
	
	//printf("\n");
  	
	//printf("testing strcpy(s1, s2): \n");
	//printf("[standard]: \t [%s] \n", strcpy(s1, s2));
	//printf("[mine]: \t [%s] \n", mystrcpy(s1, s2));
	
	//printf("\n");
	
	printf("testing strcat(s1, s3): \n");
	printf("[standard]: \t [%s] \n", strcat(s1, s3));
	s1[5] = 0;
	printf("[mine]: \t [%s] \n", mystrcat(s1, s3));
	
	printf("\n testing strcmp \n");
	
  	printf("\t comparting ab to abc:\n");
  	printf("\t\t [standard]:\t[%d]\n", strcmp("ab", "abc") );
  	printf("\t\t [mine]: \t[%d]\n", mystrcmp("ab", "abc") );
  	
  	printf("\t comparting abc to ab: \n");
  	printf("\t\t [standard]: \t [%d] \n", strcmp("abc", "ab") );
  	printf("\t\t [mine]: \t [%d] \n", mystrcmp("abc", "ab") );
  	
  	printf("\t comparting abc to abc: \n");
  	printf("\t\t [standard]:\t [%d] \n", strcmp("abc", "abc") );
  	printf("\t\t [mine]: \t [%d] \n", mystrcmp("abc", "abc") );
  	
  	printf("\n");
  	
  	printf("testing strchr(s1, 'l'): \n");
  	printf("[standard]: \t [%p] \n", strchr(s1, 'l'));
  	printf("[mine]: \t [%p] \n", mystrchr(s1, 'l'));
  	
  	printf("\n");
  	
  	printf("testing strchr(s1, 0): \n");
  	printf("[standard]: \t [%p] \n", strchr(s1, 0));
  	printf("[mine]: \t [%p] \n", mystrchr(s1, 0));
  	
  	printf("\n");
  	
  	printf("testing strchr(s1, 'z'): \n");
  	printf("[standard]: \t [%p] \n", strchr(s1, 'z'));
  	printf("[mine]: \t [%p] \n", mystrchr(s1, 'z'));
  	
}



