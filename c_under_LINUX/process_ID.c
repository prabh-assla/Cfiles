#include <stdio.h>
#include <sys/types.h>
int i = 0;

void func1();

int main(){

	printf("process I.D. = %d\n", getpid());

	if( i==5 )
			exit(0);
	++i;

func1();
 
return 0;
}

void func1(){
	main();
}