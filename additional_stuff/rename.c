#include <stdio.h>
#include <stdlib.h>

void main(){
	int i = rename("poetry.txt", "poem.txt");

	if( !i )
		printf("renaming successful!\n");

	else
		printf("renaming unsuccessful!\n");
	
}