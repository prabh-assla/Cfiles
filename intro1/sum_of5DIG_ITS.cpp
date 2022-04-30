#include <stdio.h>

int main(){
	int dig_5;
	printf("let the 5_digit number be\n");
	scanf("%d", &dig_5);
	printf("SUM OF DIGITS = %d", dig_5%10 + (dig_5%100 - dig_5%10)/10 + (dig_5%1000 - dig_5%100)/100 + 
	(dig_5%10000 - dig_5%1000)/1000 + (dig_5%100000 - dig_5%10000)/10000);
	return 0;
}