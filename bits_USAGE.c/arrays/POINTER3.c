#include <stdio.h>
void POINTER(int STYLE[], int i){ //need [] here
    int j;
for(j=0; j<i; j++){
    printf("number%d -> %d\n", j+1, STYLE[j]);
}
STYLE[3] = 881;
}

int main(){
    int twitter[] = {12, 567, 88, 9, 87, 122};
    printf("PRINTING USING ADDRESSes\n");
    POINTER(twitter, 6); //no need of [] here
    printf("number%d has changed now to %d\n", 4, twitter[3]);
    return 0;
}