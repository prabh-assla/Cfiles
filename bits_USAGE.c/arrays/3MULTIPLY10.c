#include <stdio.h>
int main(){
    int STEM[3][10], SIGN[10], i, j, bud;
    SIGN[0]=1;
    for(i=0; i<=8; i++){
        SIGN[i+1] = SIGN[i] + 1;
    }
    for(i=0; i<=9; i++){
        for(j=0; j<=2; j++){
            if(j==0){
                bud = 2;
                STEM[j][i] = bud * SIGN[i];
            }
            if(j==1){
                bud = 7;
                STEM[j][i] = bud * SIGN[i];
            }
            if(j==2){
                bud = 9;
                STEM[j][i] = bud * SIGN[i];
            }
        }
    }
        for(i=0; i<=9; i++){
        for(j=0; j<=2; j++){
            if(j==0){
                bud = 2;
     printf("%d * %d = %d\n",bud, i+1, STEM[j][i]);;
            }
            if(j==1){
                bud = 7;
    printf("%d * %d = %d\n",bud, i+1, STEM[j][i]);;
            }
            if(j==2){
                bud = 9;
    printf("%d * %d = %d\n",bud, i+1, STEM[j][i]);;
            }
        }
    }

return 0;
}