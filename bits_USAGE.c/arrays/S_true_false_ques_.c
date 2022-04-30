#include <stdio.h>
int main(){
    int rim[3]={1, 2, 3}, i;
    for(i=0; i<3; i++){
        printf("%d\n", &rim[i]);
    }
    printf("%d points to %d\n", *(rim + 2), rim[2]); //&(rim + 2) is invalid term; &rim[3] is valid 
return 0;
}