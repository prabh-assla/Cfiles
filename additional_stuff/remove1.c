#include <stdio.h>

void main(int argc, char* argv[]){

	remove(argv[1]);

	printf("RUN and oops \"remove1.c\" will be dead!\n");
}