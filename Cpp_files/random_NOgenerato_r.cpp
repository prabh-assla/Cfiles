#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    srand(time(0));
    num = rand()%100 + 1; //helps in generating a random no
    printf("the no generated randomly is %d", num);
	return 0;
}