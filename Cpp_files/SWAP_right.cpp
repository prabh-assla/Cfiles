#include <stdio.h>

void SWAP(int *a, int *b);

int main(){
	int i=4, j=6;
	SWAP(&i, &j);
	printf("values of i & j are %d & %d", *&i, *&j);
	return 0;
}

void SWAP(int *a, int *b){
	int k;
	k = *a;
	*a = *b;
	*b = k;
}