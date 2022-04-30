#include <stdio.h>
#include <math.h>
int main (){
	int a = 2,
	b = 5;
	// printf("a raised to power b is %f \n \n", pow(a,b));
	printf("a raised to power b is %d \n \n", (int) pow(a,b));
	// printf("a raised to power b is %d", pow(a,b)); //pow will give 0 only
	return 0;
}