#include <stdio.h>

typedef struct info{
    unsigned int m : 4; //max. value == 12 {4 bit binary}
    unsigned int d : 5; //max. value == 31 {5 bit binary}
    unsigned int y : 8; //max. value == 9999 {8 bit binary}
} dob;

typedef struct information{
    unsigned int mm;
    unsigned int dd;
    unsigned int yy;
} date_OF_birth;

int main(){
 dob d;
 date_OF_birth dd;
        printf("%d\n", sizeof(d));
        printf("%d\n", sizeof(dd));
return 0;
}