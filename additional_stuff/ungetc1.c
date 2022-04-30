#include <stdio.h>

int main(){
	char c; int i;
	
	for(i=1;i<=5;i++)
	{
	     scanf("%c",&c);
	     printf("%c",c);
	     ungetc(c,stdin);
	}

	return 0;
}