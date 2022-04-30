#include <stdio.h>
#include <unistd.h>

int main(){
	printf("before forking.\n");

	fork();
	printf("after forking.\n");

	fork();
	printf("after after forking.\n");

	printf("process I.D. = %d\n", getpid());

return 0;
} 