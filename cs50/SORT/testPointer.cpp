#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char str;
	scanf("say something : %s", &str);
	char *s1 = &str;
	if(s1 == NULL)
		return 1;
		
	char *s2 = s1;
	
	printf("Capitalizing copy...\n");
	if(strlen(s2)>0){
		s2[0] = toupper(s2[0]);
	}
	
	printf("Original: %s\n", s1);
	printf("Copy: %s\n", s2);
}
