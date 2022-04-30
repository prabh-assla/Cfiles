#include <stdio.h>

int main(){
	int num, divisor;
	printf("put NO. then DIVIS.\n");
	scanf("%d %d", &num, &divisor);
	printf("quot. = %d, remain. = %d", num/divisor, num%divisor );
	return 0;
}