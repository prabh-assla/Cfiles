#include <stdio.h>

int main(){
	int i, j, pro=1, k=1;
	printf("type the value of no. 1 & 2\n");
	scanf("%d %d", &i, &j);
	while(k<=j){
		   pro=pro*i;
		   k++;
	}
printf("the value of i^j is %d", pro);
return 0;
}