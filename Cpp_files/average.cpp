#include <stdio.h>

float avg(int a, int b, int c);

int main(){
	int P, Q, R;
	float average;
	printf("type any three no\n");
	scanf("%d %d %d", &P, &Q, &R);
	average = avg(P, Q, R);
	printf("avg value = %.3f", average);
	return 20; //no matter 0 or anything here
}

float avg(int a, int b, int c){
	float average; //can't use PQR here
	average = (a+b+c)/3;
	return average; //always AVERAGE, no way 0
}
