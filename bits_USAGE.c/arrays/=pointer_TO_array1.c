#include <stdio.h>
int main(){
    int STALE[4][2] = {
        {12, 4532},
        {178, 32},
        {58, 901},
        {101, 5353}
};

int (*TRIP)[2], i, j, *trip;

for(i=0; i<=3; i++){
    TRIP = &STALE[i];
    trip = *(TRIP); //trip has to be an ADDRESS variable because INT variable gives ERROR
for(j=0; j<=1; j++){
    printf("%d\t", trip[j]);
}
    printf("\n");
}
    return 0;
}