#include <stdio.h>
int main(){
	int a, b=0, prod=1; //for 0 & 1 both the same result
	printf("type any num \n");
	scanf("%d", &a);
	do{
		b++;
		prod *= b;
	}while(b<a);
	printf("the value of %d! is %d", a, prod);
	return 0;
}