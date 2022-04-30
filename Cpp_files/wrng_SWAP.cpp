#include <stdio.h>

void WRNG_SWAP(int a, int b);

int main(){
	int i=4, j=6;
	WRNG_SWAP(i, j);
	printf("values of i & j are %d & %d\n", i, j);
	return 0;
}

void WRNG_SWAP(int a, int b){
	int k;
	k = a;
	a = b;
	b = k;
}