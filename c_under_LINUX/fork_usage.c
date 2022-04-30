#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

	if( !fork() ){

		printf("essentials!");

	}

	else{

		printf("oil ");

	}

	return 0;
}