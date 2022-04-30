#include <stdio.h>
#define _BV(x) (1<<x)
int main(){
 
 unsigned char binary;
 binary = _BV(3);
 printf("%02x\n", binary); /* 0 because if answer is 8 it will be 08; 
 but if 18 it will not be 018 but 18; because 2 columns are assigned */ 
 binary = _BV(6);
 printf("%09x\n", binary);

return 0;
}