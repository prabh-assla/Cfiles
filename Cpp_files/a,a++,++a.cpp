#include <stdio.h>

int main(){
	int x;
	printf("tell x value\n");
	scanf("%d", &x);
	printf("the value of a, ++a, a++ are %d, %d, %d", x, ++x, x++);              //right to left, top to below
	return 0;
}