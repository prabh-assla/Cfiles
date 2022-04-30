#include<stdio.h>
void rooster(int num[7]){
    for(int i=0; i<7; i++){
        if(num[i]>0){
            printf("%d ", num[i]);
        }
    }
}
int main(){
    int num[7]={12, 23, -8, -9, 50, -777, -65};
    rooster(num);
    return 0;
}