#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num, times = 1, actual;
	srand(time(0)); //only extra term
	actual = rand()%100 + 1; //also extra
	   do{
	 printf("guess a no from 1 to 100 \n");
     scanf("%d", &num);
	   	if(num > actual){
	   		printf("guess a LOWER ONE \n");
	   	}
	   	else if(num < actual){
	   		printf("guess a HIGHER ONE \n");
	    }
	   	else{
	   		printf("you guessed the no in %d attempts", times);
		   }
		   
		times++;
	   }while(num != actual);
	return 0;
}