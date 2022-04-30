#include <stdio.h>

int ROSE();

int main(){
	printf("we are learning FUNCTIONS\n");
	ROSE();
	printf("the function was executed");
	return 0;
}

int ROSE(){
	printf("the function is named \"ROSE\"\n");
	return 0; //to remove the term RETURN 0 use void ROSE, rather than int ROSE
}