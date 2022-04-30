#include <stdio.h>
int main(){
	int yr;
    printf("type year no \n");
	scanf("%d", &yr);
	if( ((yr%4) + (yr%100) + (yr%400)) == 0){
	printf("it is a leap year");
    }
	else{
	printf("it is not a leap year");
	}
	return 0;
}