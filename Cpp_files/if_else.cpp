#include <stdio.h>
int main() {
//	USING IF-ELSE
	int a, b;
	printf("Enter value of a \n");
	scanf("%d", &a);
	printf("Now enter for b \n");
	scanf("%d", &b);
	if(a%b == 0){
		printf("a is multiple of b");
	}
	else{
		printf("a is NOT multiple of b");
	}
	return 0;
}