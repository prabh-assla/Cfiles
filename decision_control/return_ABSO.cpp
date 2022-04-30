#include <stdio.h>

int main(){
	float a;
	printf("type the value of number\n");
	scanf("%f", &a);
	if (a<0) 
		printf("absolute value of a is %f", -a);
	if (a>=0)
		printf("absolute value of a is %f", a);
return 0;
}