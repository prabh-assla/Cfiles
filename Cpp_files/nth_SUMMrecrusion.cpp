#include <stdio.h>

int nth_sum(int n);

int main(){
	int n, SUMM;
	printf("type the value of n\n");
	scanf("%d", &n);
	SUMM = nth_sum(n);
	printf("thus summation is=%d", SUMM);
	return 0;
}

int nth_sum(int n){
	int SUMM;
	if (n==1)
	return 1;
	else
	SUMM = n + nth_sum(n-1);
	return SUMM;
}