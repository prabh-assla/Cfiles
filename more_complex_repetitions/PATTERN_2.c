#include <stdio.h>

int main(){
    int i, j, k;
    char alpha, bet;
    for(i=7; i>=1; i--){
        bet = 65;
        if(i==7){
            for(j=1; j<7; j++)    
    {
    printf("%c\t", bet);
    bet++;
    }}
    bet = 65;
    if(!(i==7))
    {for(j=1; j<=i; j++)    
        {
    printf("%c\t", bet);
    bet++;
    }}
    bet = 65;
    if(i==7)
    printf("G\t");
    if(i==6)
    printf("\t");
    if(i==5)
    for(k=1; k<=3; k++)
    printf("\t");
    k=1;
    if(i==4)
    for(k=1; k<=5; k++)
    printf("\t");
    k=1;
    if(i==3)
    for(k=1; k<=7; k++)
    printf("\t");
    k=1;
    if(i==2)
    for(k=1; k<=9; k++)
    printf("\t");
    k=1;
    if(i==1)
    for(k=1; k<=11; k++)
    printf("\t");
    bet=70;
    if(i==7){
            for(j=1; j<7; j++)    
    {
    printf("%c\t", bet);
    bet--;
    }}
    bet=70;
    if(!(i==7))
    {for(j=1; j<=i; j++)    
        {
    printf("%c\t", bet);
    bet--;
    }}
    printf("\n");
    }
    return 0;
}
