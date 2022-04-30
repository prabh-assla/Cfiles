#include <stdio.h>
#include <string.h>

int main(){
	char s1[]= "prabhdeep", s2[] = "vikram";

	char* ptr = strpbrk(s1, s2);

	if( ptr!=NULL )
		printf("the first matched character - %c\n", *ptr);
	else
		printf("no character match is available!\n");

	return 0;
}