#include <stdio.h>

int main(void){
	char *buffer;
	printf("String please: ");
	scanf("%s", buffer);
	printf("Thanks for the %s\n", buffer);
}
