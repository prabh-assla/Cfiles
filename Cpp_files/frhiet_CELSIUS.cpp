#include <stdio.h>

float Frhiet(float F);

int main(){
	float C, q;
	printf("temp in Farenheit is =\n");
	scanf("%f", &q);
	C = Frhiet(q);
	printf("thus temp in Celsius is = %f", C);
	return 0;
}

float Frhiet(float F){
	float C;
	C = (((F-32)*5)/9);
	return C; //both C LINE 9 & 16 are not related to each other at all
}