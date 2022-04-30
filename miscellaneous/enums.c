#include <stdio.h>

typedef enum division{
    senior, middle, junior
} div;


div AGEIFY(int a){
    if(a>=20 && a<=35)
    return(middle);

    if(a<=20)
    return(2);

    else
    return(senior);
}

int main(){

int age = 7;

div AGE;
    AGE = AGEIFY(age);

    printf("%d\n", AGE);
return 0;
}