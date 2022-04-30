#include <stdio.h>
int main(){
	char word;
	printf("type any letter \n");
	scanf("%c", &word);
	if(word>=65 && word<=90){
		printf("your letter is UPPERCASE");
	}
	else{
		printf("it is lowercase letter");
	return 0;
	}
}