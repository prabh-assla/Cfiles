#include <stdio.h>
int main(){
	int a;
	printf("put no. a \n");
	scanf("%d", &a);
	(a < 3) ? printf("a is less than 3") : printf("a is greater or equal to 3");
	return 0;
}