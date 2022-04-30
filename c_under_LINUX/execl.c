#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	
	int pin = fork();

	if( pin==0 ){

		execl("/home/prabhdeep/Documents/important_CAREER_in_C/c_under_LINUX/EXEC", "/home/prabhdeep/Documents/important_CAREER_in_C/c_under_LINUX/EXEC", "./EXEC", (char*) NULL);

        printf("the process has been overwritten so this statement won't be shown onto 'CONSOLE'!\n");
	
	}

	else
		printf("it is a parent process!\n");

return 0;

}