#include <stdio.h>

int main(){
	int t = 1189, y = 841;
	printf("DIMENSIONS OF PAPERS --->\n");
	printf("A0 = %d MM x %d MM\n", t, y);
	printf("A1 = %d MM x %d MM\n", t/2, y);
	printf("A2 = %d MM x %d MM\n", t/2, y/2);
	printf("A3 = %d MM x %d MM\n", t/4, y/2);
	printf("A4 = %d MM x %d MM\n", t/4, y/4);
	printf("A5 = %d MM x %d MM\n", t/8, y/4);
	printf("A6 = %d MM x %d MM\n", t/8, y/8);
	printf("A7 = %d MM x %d MM\n", t/16, y/8);
	printf("A8 = %d MM x %d MM", t/16, y/16);
return 0;
}