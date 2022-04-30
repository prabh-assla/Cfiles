#include <stdio.h>
#include <signal.h>
#include <string.h>

void handleSignal( int signum ){

	switch( signum ){
		case SIGTERM:
		printf("sigterm - %d CHOSEN!\n", signum);
		break;

		case SIGINT:
		printf("sigint - %d CHOSEN!\n", signum);
		break;

		case SIGCONT:
		printf("sigcont - %d CHOSEN!\n", signum);
		break;
	}

}

int main(){
	sigset_t block;

	char option = 'y';

	signal( SIGTERM, handleSignal );
	signal( SIGINT, handleSignal );
	signal( SIGCONT, handleSignal );

	sigemptyset( &block );
	sigaddset( &block, SIGTERM );
	sigaddset( &block, SIGINT );

	sigprocmask( SIG_BLOCK, &block, NULL );

	while( option!='n' )
		option = getchar();

	printf("out of first loop!\n");

	sigprocmask( SIG_UNBLOCK, &block, NULL );

	while( 1 );

	return 0;
}