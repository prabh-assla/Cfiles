#include <stdio.h>
int main(){
	int a;
	printf("enter no \n");
	scanf("%d", &a);
	a > 0; //infinite loop
	while( a>=6 ){
		printf("%d \n", a);
		a++;
	}
	return 0;
}