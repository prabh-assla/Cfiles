#include <stdio.h>
int main(){
	int i = 0, j, sum = 0;
	printf("type num \n");
	scanf("%d", &j);
	while(i<=9){ //as i will become 10 it will be incremented to 11, so use i<=9
		i++;
		sum += (i*j);
//	 printf("the sum of first 10 multiples of num %d is %d \n", j, sum);                          don't use this line here;
	}
	printf("the sum of first 10 multiples of num %d is %d \n", j, sum);
	return 0;
}