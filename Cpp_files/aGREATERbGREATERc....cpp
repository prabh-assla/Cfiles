#include <stdio.h>
int main(){
	int a, b, c, d;
	printf("type 4 numbers \n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((a>=b) && (a>=c) && (a>=d)){
		printf("%d is greatest no", a);
	}	
	else if ((b>=a) && (b>=c) && (b>=d)){
		printf("%d is greatest no", b);
	}
	else if ((c>=a) && (c>=b) && (c>=d)){
		printf("%d is greatest no", c);
	}
	else if ((d>=b) && (d>=a) && (d>=c)){
		printf("%d is greatest no", d);
	}
	return 0;
}