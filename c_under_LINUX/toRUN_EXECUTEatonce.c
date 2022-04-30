#include <stdio.h>
#include <unistd.h>

int main(){

	int pid = fork();

	if( pid == 0 ){

		sleep( 4 );

		execl("/home/prabhdeep/Documents/important_CAREER_in_C/c_under_LINUX/HW", "/home/prabhdeep/Documents/important_CAREER_in_C/c_under_LINUX/HW", "./HW", (char*) NULL);

        printf("the child process can wait for some seconds!\n");

	}

	else{

		execl("/usr/bin/x86_64-linux-gnu-gcc-9", "/usr/bin/x86_64-linux-gnu-gcc-9", "HW.c", "-o", "HW", (char*) NULL);

        printf("the parent process should terminate first obviously!\n");
	}

return 0;

}