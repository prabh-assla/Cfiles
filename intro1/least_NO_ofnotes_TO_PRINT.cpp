#include <stdio.h>

int main(){
    			int AMOUNT, A = ((AMOUNT - AMOUNT%100)/100), 
				B = ((AMOUNT%100 - AMOUNT%10)/10), 
				C = ((AMOUNT%10 - AMOUNT%5)/5), 
				D = ((AMOUNT%5 - AMOUNT%2)/2);
printf("let the amount be\t", AMOUNT);
scanf("%d", &AMOUNT);
	if (AMOUNT%100 == 0){
	printf("smallest no. of notes that give this amount is %d", AMOUNT/100);
	}
		else{
		if ((AMOUNT%100)%10 == 0){
		printf("smallest no. of notes that give this amount is %d", (AMOUNT%100)/10 + A);
		}
			else{
			if(((AMOUNT%100)%10)%5 == 0){
			printf("smallest no. of notes that give this amount is %d", ((AMOUNT%100)%10)/5 + A + B);
			}
			    else{
			    if(((((AMOUNT%100)%10)%5)%2)== 0){
				printf("smallest no. of notes that give this amount is %d", (((AMOUNT%100)%10)%5)/2 + A + B + C);
				}
					else{
				    printf("smallest no. of notes that give this amount is %d", ((((AMOUNT%100)%10)%5)%2)/1 + A + B + C + D);
	         	}
		    }
		}
	}
	
	return 0;
}