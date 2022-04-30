#include <stdio.h>
void POINTER(int*add,int i){
    int j;
for(j=0; j<i; j++){
    printf("number%d -> %d\n", j+1, *add);
    add++;
}
}

int main(){
    int twitter[] = {12, 567, 88, 9, 87, 122};
    printf("PRINTING USING ADDRESSes\n");
    POINTER(twitter, 6);
    return 0;
}