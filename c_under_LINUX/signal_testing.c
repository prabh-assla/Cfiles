#include <stdio.h>
#include <signal.h>

void interruption( int signum ){
	printf("command kill is used - %d\n", signum);
}

void termination( int signum ){
	printf("command terminate is used - %d\n", signum);
}

int main(){

	signal( SIGTERM, termination );
	signal( SIGINT, interruption );

	while(1);

return 0;

}