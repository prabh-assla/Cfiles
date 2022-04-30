#include <stdio.h>
#include <signal.h>

void handleSignal( int signum ){
	printf("command VALUE - %d\n", signum);
}

int main(){

	signal( SIGTERM, handleSignal );
	signal( SIGINT, handleSignal );

	while(1);

return 0;

}