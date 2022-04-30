#include <stdio.h>

int main(){
	int i=1, j, k, l;
	while (i<=500){	
	j = i/100; 
	k = ((i%100)/10);
	l = ((i%100)%10);
    if(i == j*j*j + k*k*k + l*l*l)
			printf("%d \t", i);
	i++;
}
return 0;
}