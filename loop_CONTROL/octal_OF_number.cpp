#include <stdio.h>

int main(){
	int NUM, num, OCT = 0, glen = 1;
	printf("type any number\n");
	scanf("%d", &NUM);
	num = NUM;
	while(NUM>0){
		OCT = OCT + ((NUM%8)*glen);
		NUM = NUM/8;
		glen*=10;
}
	printf("the required octal of %d is %d",num, OCT);
return 0;
}