#include <stdio.h>
#include <ctype.h>

void main(){

	char str1[] = "tobehAPPY!",
	str2[] = "andsaTISFIED!";

/*	memmove( str1+5, str1, 5 );
	printf("%s\n", str1);

	memmove( str2, str2+5, 5 );
	printf("%s\n", str2); */

	memcpy( str1+5, str1, 3 );
	printf("%s\n", str1);

	memcpy( str2, str2+5, 3 );
	printf("%s\n", str2);

}