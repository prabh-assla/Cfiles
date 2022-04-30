#include <stdio.h>
int main () {
	int i = 0, j; //can put i = 0 here
	printf("type a number j \n");
	scanf("%d", &j);
	for(i = 1; i <= j; i ++){ //can't avoid i = 0 here
		printf("the number is %d \n", i);
	}
return 0;
}