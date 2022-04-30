#include <stdio.h>

int main(){
int i, j;
    for (i=1; i<=300; i++){
        if(i==2)
        printf("%d\n", i);
        else
            for(j=2; j<i; j++)
                {if(i%j==0)
                break;
                else
                if(j!=(i-1))
                continue;
                else
                printf("%d\n", i);
}}
return 0;
}