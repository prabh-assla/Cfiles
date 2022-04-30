#include <stdio.h>
#include <ctype.h>

int main(){

	char S1[30] = "happiness happy healthify hope!";

	if( memchr(S1, 'z', sizeof(S1) ) )
		printf("indeed present!\n");

	else
		printf("isn't present at all!\n");

return 0;
}