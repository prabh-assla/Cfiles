#include <stdio.h>
int main(){
	int a;
	printf("rate no. of stars \n");
	scanf("%d", &a);
//	switch & case
    switch(a){
    	case 1:
    		printf("your star is 1 \n");
    		break;
    	case 2:
    		printf("your stars are 2 \n");
    		break;
    	case 3:
    		printf("your stars are 3 \n");
    		break;
    	default:
    		printf("invalid stars");
    		break;
	}
	return 0;
}