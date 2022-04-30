#include <stdio.h>
int main(){
	int i, j;
	printf("let no be \n");
	scanf("%d", &j);
	for(i=20; i; i--){
		printf("%d * %d = %d \n", j, i, j*i);
	}
	return 0;
}