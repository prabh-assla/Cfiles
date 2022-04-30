#include <stdio.h>

int product(int a, int b);

int main(){
	int i;
	i = product(95, 4);
	printf("value of the operation a x b is %d", i);
	return 0;
}

int product(int a, int b){
	int i;
	i = a*b;
	return i;
}