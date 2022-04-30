#include <stdio.h>
#include <signal.h>

void handleSignal( int signum ){
	printf("you have pressed Ctrl + C || signal value = %d\n", signum);
}

int main(){
	signal( SIGINT, handleSignal );

	for( ;; );
	
return 0;
}