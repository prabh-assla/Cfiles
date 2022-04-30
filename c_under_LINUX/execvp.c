#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	
	int pin = fork();

	if( pin==0 ){

		char*args[] = { "./HW", NULL };
        execvp( args[0], args );

        printf("the process has been overwritten so this statement won't be shown onto 'CONSOLE'!\n");
	
	}

	else
		printf("it is a parent process!\n");

return 0;

}