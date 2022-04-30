#include <stdio.h>

void det(int*tip){
    int o, p, q, r, sum = 0, sum1 = 0, sum2 = 0, prod=1;
    for(int j=1; j<=6; j++){
        if(j=1)
        tip+=8-j;
        else
        tip+=7-j;
        for(int k=1; k<=5; k++){
            if(k=1)
            tip+=8-k;
            else
            tip+=7-k;
            for(int l=1; l<=4; l++){
                sum2 = 0;

                prod*=(-1);

                r = (*tip)*prod;

                if(l=1)
                tip+=8-l;
                else
                tip+=7-l;

                for(int m=1; m<=3; m++){
                    q = (*tip)*prod;

                    if(l==2 && l==3){
                    if(m=1)
                    tip+=10-m;
                    else
                    tip+=7-m;}

                    else{
                    if(m=1)
                    tip+=8-m;
                    else
                    tip+=7-m;}

                        for(int n=1; n<=2; n++){
                            o = *tip;
                            if(m==2){
                                if(n==1)
                                tip+=9-n;
                                else
                                tip+=6-n;
                            }
                            else{
                                if(n==1)
                                tip+=8-n;
                                else
                                tip+=7-n;
                            }
                            p = *tip;

                            sum+=(o*p)*prod;

                            if(m==2){
                                if(n==1)
                                {tip-=9-n;
                                tip+=2;}
                                else
                                {tip-=6-n;
                                tip++;}
                            }
                            else{
                                if(n==1)
                                {tip-=8-n;
                                tip++;}
                                else
                                {tip-=7-n;
                                tip++;}
                            }

                            prod*=(-1); 
                    }
                sum1+=q*sum;
                prod*=(-1);
                sum = 0;
                tip-=9;
                tip+=m;

                            if(l==2 && l==3){
                            if(m=1)
                            tip-=10-m;
                            tip+=2;
                            else
                            tip+=7-m;}
                }
            tip-=10;
            tip+=l;
            }
        tip-=11;
        tip+=k;
        }
    tip-=12;
    tip+=j;
    }
tip++;
}

int main(){
int STAIR[6][6]={{4, 6, 9, 5, 1, 8},{3, 7, 2, 1, 5, 9},{4, 2, 9, 8, 1, 3},{3, 1, 4, 5, 8, 9,},
{9, 4, 5, 1, 2, 3},{5, 2, 3, 6, 7, 1}};
    det(*STAIR);
    return 0;
}