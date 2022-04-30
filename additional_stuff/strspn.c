#include <stdio.h>
#include <string.h>

void main(){

	char s1[] = "geeks for geeks!", s2[] = "geeksfrgks!";
	int i = strspn( s1, s2 );

	printf("length - %d\n", i);

}