#include <stdio.h>

int main(){
	int dig_5;
	printf("type a number of 5 digits\t");
	scanf("%d", &dig_5);
	int A = (dig_5%10)*10000, B = ((dig_5%100 - dig_5%10)/10)*1000, C = ((dig_5%1000 - dig_5%100)/100)*100, 
	D = ((dig_5%10000 - dig_5%1000)/1000)*10, E = (dig_5%100000 - dig_5%10000)/10000;
	printf("reverse of this number is\t%d", E+D+C+B+A);	
	return 0;
}