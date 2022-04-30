#include <stdio.h>

int POWER();
void PLAY();
int INSIDE();
void MATCH();

int main(){ //main must return INT, always
	printf("life is about satisfaction\n");
	POWER();
	printf("try to stay happy always");
	return 80;
}

int POWER(){
	printf("no-one knows when\n");
	PLAY();
	INSIDE();
	return 0;
}

void PLAY(){
	printf("Life\n");
}

int INSIDE(){
	printf("wiLL\n");
	MATCH();
	return 90;
}

void MATCH(){
	printf("end\n");
}