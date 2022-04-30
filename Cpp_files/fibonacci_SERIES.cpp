#include <stdio.h>

int fib(int n);

int main(){
	int n, fibcc;
	printf("type the value of n\n");
	scanf("%d", &n);
	fibcc = fib(n);
	printf("value of nth element of series is = %d", fibcc);
	return 0;
}

int fib(int n){
	int FIBONACCI;
	if (n==1)
	return 0;
	else if (n==2)
	return 1;
	else
	FIBONACCI = fib(n-1) + fib(n-2);
	return FIBONACCI;
}