#include <stdio.h>
int main(){
    float INCOME, L = 100000, TAX, TAXt, TAXta, TAXtax;
    printf("type your annual income \n");
    scanf("%f", &INCOME); //never use after %f \n 
    if(INCOME<= 2.5*L){
    	TAX = 0.0; //NO BRACKETS USED HERE
	}
	if(INCOME> 2.5*L && INCOME<= 5.0*L){
		(TAXt = ((INCOME-(2.5*L))*0.05)); //BRACKETS BEEN USED but no prob.
	}
	if(INCOME> 5.0*L && INCOME<= 10.0*L){
		TAXta = ((INCOME-(5.0*L))*0.2);
	}
	if (INCOME> 10.0*L){
		TAXtax = ((INCOME-(10.0*L))*0.3);
	}
	printf("your income tax is Rs. %f", TAX + TAXt + TAXta + TAXtax); //can simply --- TAX = TAX + ((INCOME-(5.0*L))*0.2)
	return 0;
}