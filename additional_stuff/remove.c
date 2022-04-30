#include <stdio.h>

void main(int argc, char* argv[]){

	remove(argv[0]);

	printf("RUN and oops \"a.out\" will be dead!\n");
}