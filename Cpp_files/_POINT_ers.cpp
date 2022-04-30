#include <stdio.h>

int main(){
	int i = 3;
	int * j = &i;
	printf("value of i is %d\n", i);
	printf("value of i is %d\n", *j);
	printf("value of i is %d\n", *&i);
	printf("value of address of i is %u\n", j);
	printf("value of address of i is %u\n", &i);
	printf("value of address of j is %u\n", &j);
	printf("value of j is %d", *&j);
return 0;
}