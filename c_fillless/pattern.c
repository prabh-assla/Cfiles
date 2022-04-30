#include <stdio.h>

int main(){
int i, j, k, r=1;
     for(i=4; i>=1; i--){
        for(j=1; j<=i; j++)
        printf("\t");
        if(i==4)
        {printf("%d\t", r);
        r++;}
        if(i==3)
        for(r; r<=3; r++)
        printf("%d\t", r);
        if(i==2)
        for(r; r<=6; r++)
        printf("%d\t", r);
        if(i==1)
        for(r; r<=10; r++)
        printf("%d\t", r);
        for(k=1; k<i; k++)
        printf("\t");
        printf("\n");}
return 0;
}