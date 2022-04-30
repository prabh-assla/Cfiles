
#include <stdio.h>

void showbits(unsigned char ch){
    unsigned char j, k, l;
    for(int i=7; i>=0; i--){
        j = i;
        l = 1 << j;
        k = ch & l;
        if(k == 0)
        printf("0");
        else
        printf("1");
    }
printf("\n");
}

int main(){
    
    showbits(5);
    showbits(-5);
    showbits(-5>>3);
    showbits(-5<<3);
printf("\n");
    showbits(4);
    showbits(-4);
    showbits(-4>>3);
    showbits(-4<<3);
printf("\n");
    showbits(8>>-3);
    showbits(5<<-4); 
 
return 0;
}