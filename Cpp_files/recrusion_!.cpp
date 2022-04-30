#include <stdio.h>

int factorial(int n);

int main(){
	int num, f;
	printf("type value of num\n");
	scanf("%d", &num);
	f = factorial(num);
	printf("the value of factorial is %d", f);
	return 0;
}

int factorial(int n){
//	int f = (n * factorial(n-1));                 			CAN'T PUT HERE
	int i;
	if (n==0 || n==1)
	return 1;
	else
	i = n * factorial(n-1);
	return i;
}