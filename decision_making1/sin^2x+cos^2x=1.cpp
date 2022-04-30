#include <stdio.h>
#include <math.h>

int main(){
	float ang;
	float out;
	printf("value of angle is\n");
	scanf("%f", &ang);
	out = pow(sin(ang),2) + pow(cos(ang),2);
	out == 1 ? printf("yup, it is 1") : printf("no, not 1");
	return 0;
}