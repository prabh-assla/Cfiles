#include <stdio.h>

int main(){
	
		ungetc('\n', stdin);

	while(getchar() != '\n') 
		ungetc(getchar(), stdin);

	while(putchar(getchar()) != '\n');
	
	// while(putchar(getchar()) != '\n');

return 0;
}