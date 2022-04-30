#include <stdio.h>

int main(){
	int a, b, c;
	printf("type values for sides\n");
	scanf("%d%d%d", &a, &b, &c);
	if((a+b>c) && (b+c>a) && (a+c>b)){
	if(a==b && b==c && c==a)
		printf("equilateral");
	if(a!=b && b!=c && c!=a && (a*a!=b*b+c*c) && (b*b!=c*c+a*a) && (c*c!=a*a+b*b))
		printf("scalene");
	if((a==b && c!=a && c!=b) || (b==c && a!=b && a!=c) || (a==c && b!=c && b!=a))
		printf("isosceles");
	if((a*a==b*b+c*c) || (b*b==c*c+a*a) || (c*c==a*a+b*b))
	  	printf("rt. angled");}
	
	else{
	 printf("no any triangle");
	}
return 0;
}