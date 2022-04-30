#include <stdio.h>

int main(){
	int PAY;
	float GROSS;
	printf("type the salary\n");
	scanf("%d", &PAY);
	GROSS = PAY + (0.4*PAY) + (0.2*PAY);
	printf("gross income of yours = %f", GROSS);
	return 0;
}