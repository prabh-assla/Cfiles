#include <stdio.h>

int main(){
    int i, j, k=1, l, sum=1;
    for(i=5; i>=1; i--){
        for(j=1; j<i; j++){
            printf("\t"); }
    if(i==5)
    printf("%d\t\t", k); 
        if(i==4)
        {{for(l=1; l<=2; l++)
        printf("%d\t\t", k);}
        l=1;
        sum+=l;
        }
            if(i==3)
            {{for(l=1; l<=3; l++)
            if(l==1 || l==3)
            printf("%d\t\t", k);
            else
            printf("%d\t\t", sum);}
            l=1;
            sum+=l;
    }
                if(i==2){
                {for(l=1; l<=4; l++)
                if(l==1 || l==4)
                printf("%d\t\t", k);
                else
                printf("%d\t\t", sum);
                }
                      l=1;
                      sum+=l;
             }
                if(i==1)
                {for(l=1; l<=5; l++)
                        if(l==1 || l==5)
                        printf("%d\t\t", k);
                        else if(l==2 || l==4)
                        {printf("%d\t\t", sum);
                        }
                        else{
                        printf("%d\t\t", sum+2*k);
                        }}
        printf("\n");
    }
    return 0;
}