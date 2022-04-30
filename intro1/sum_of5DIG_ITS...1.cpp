#include <stdio.h>

int main(){
	int NO, sum=0;
	printf("type the 5 digit integer\n");
	scanf("%d", &NO);
				  	sum = sum +NO%10;
				  	
				  	NO = NO/10;
				  	sum = sum + NO%10;
				  	
				  	NO = NO/10;
				  	sum = sum + NO%10;
				  	
				  	NO = NO/10;
				  	sum = sum + NO%10;
				  	
				  	NO = NO/10;
				  	sum = sum + NO%10;
  	printf("the value of SUM of digits is %d", sum);
return 0;
}