#include <stdio.h>

int main(){
    int i =900;
    int*point = &i;
    int**point_point = &point;
    printf("thus the value of varaible i is = %d\n", **point_point); //**point_point translable as **&(&(i))
return 0;
}