#include <stdio.h>
int main(){
	int i = 1, n;
	printf("type value of n \n");
	scanf("%d", &n);
//	do{
//		printf("the value of num is %d \n", i);
//	    i ++;
//	}while(i <= n);
	
//	do{
//		printf("the value of num is %d \n", i + 1);
//	    i ++;
//	}while(i <= n);
		
//	do{
//		printf("the value of num is %d \n", i + 1);
//	    i ++;
//	}while(i < n);
	
	do{
		printf("the value of num is %d \n", i + 2);
	    i ++;
	}while(i <= n);
return 0;	         
}