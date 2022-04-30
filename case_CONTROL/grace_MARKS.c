#include <stdio.h>
#include <stdlib.h> //for using exit(0) & goto both

int main(){
    int class, subjects, grace=0;

    printf("enter class obtained -- 1,2,3\t");
    fflush(stdin);
    scanf("%d", &class);

    printf("enter the no of subjects the student has failed in\t");
    fflush(stdin);
    scanf("%d", &subjects);

    if(class==1)
    switch(subjects){
        case 1 :
        grace+=5;
        break;
        case 2 :
        grace+=(2*5);
        break;
        case 3 :
        grace+=(3*5);
        break;
        default :
        grace+=0;
    }

    else if(class==2)
    switch(subjects){
        case 1 :
        grace+=4;
        break;
        case 2 :
        grace+=(2*4);
        break;
        default :      
        grace+=0;
    }
 
    else if(class==3)
    switch(subjects){
        case 1 :
        grace+=5;
        break;
        default :
        grace+=0;
    }

    else
    {printf("invalid class\n");
    exit(0);} //{} is important here;

printf("thus the total grace marks the student is alloted = %d\n", grace);
return 0;
}