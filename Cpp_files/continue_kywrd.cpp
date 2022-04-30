#include <stdio.h>
int main(){
	int b, a;
	printf("value of a is\n");
	scanf("%d", &a);
	for(b = 1; b<=a; b++){
		if(b==5) //we can use b!=5 here too
		continue;
	        printf("the value of number is %d \n", b);
		}
	return 0;
}