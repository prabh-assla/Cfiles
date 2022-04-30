#include <stdio.h>

int main(){
	int i, j=2;
	printf("enter a number \n");
	scanf("%d", &i);
	
	do{
		i ++;
		if (i%j == 0){
		printf("a composite number");
		}
		break;
	}
	
	if (i==j){
		printf("prime number");
	}
return 0;
}