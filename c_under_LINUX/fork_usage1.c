#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

	int pid = fork();

	if( !pid ){

		printf("essentials! \n");

		printf("child process - %d || parent process - %d\n", getpid(), getppid());

	}

	else{

		printf("oil \n");

		printf("parent process - %d || child process - %d\n", getpid(), pid);

	}

	return 0;
}