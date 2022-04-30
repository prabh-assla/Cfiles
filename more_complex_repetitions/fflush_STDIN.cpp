#include <stdio.h>

int main(){
	char response;
	int num;
	do{
		printf("type the value of number\n");
		scanf("%d", &num);
		printf("thus the square of number is %d\n", num*num);
		fflush(stdin); //newTHING
		printf("wish to continue Y/N\n");
		scanf("%c", &response);
	} while(response=='Y');
	
return 0;
}