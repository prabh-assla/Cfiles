#include <stdio.h>
#include <stdlib.h>

int main(){
    int grow[100] = {1, 2, 3, 4, 5}, i=4, j, ENTER, num;
    char choice;

    for(;;){
                    printf("\narray ->\n");
                    for(j=0; j<=i; j++){
                    printf("%d\t", grow[j]);
                    }
                    printf("\n");

printf("options -\n(1) del_left\n(2) del_right\n(3) insrt_left");
printf("\n(4) insrt_right\n(5) del_all\n(6) reassign all\n(0) exit\n");
fflush(stdin);
scanf("%d", &ENTER);
switch(ENTER){

    case 1:
    i--;
    for(j=0; j<=i; j++){
        grow[j] = grow[j+1];
        printf("%d\t", grow[j]);
    }
    printf("\n");
    break;

    case 2:
    i--;
    for(j=0; j<=i; j++){
        printf("%d\t", grow[j]);
    }
    printf("\n");
    break;

    case 3:
    i++;
    printf("to be inserted on LEFT -\t");
    fflush(stdin);
    scanf("%d", &num);
    for(j=i; j>=1; j--){
        grow[j] = grow[j-1];
    }
    grow[0] = num;
    for(j=0; j<=i; j++){
        printf("%d\t", grow[j]);
    }
    printf("\n");
    break;

    case 4:
    i++;
    printf("to be inserted on RIGHT -\t");
    fflush(stdin);
    scanf("%d", &num);
    grow[i] = num;
    for(j=0; j<=i; j++){
        printf("%d\t", grow[j]);
    }
    printf("\n");
    break;

    case 5:
    for(j=0; j<=i; j++){
        grow[j] = 0;
        printf("%d\t", grow[j]);
    }
    printf("\n");
    break;

    case 6:
    for(j=0; j<=i; j++){
        printf("element %d is -\t", j+1);
        fflush(stdin);
        scanf("%d", &grow[j]);
    }
    for(j=0; j<=i; j++){
        printf("%d\t", grow[j]);
    }
    printf("\n");
    break;

    case 0:
    printf("thanks for using my dequeue-enqueue function\n");
    exit(0);
}
printf("do you wish to continue (y/n) -\t");
fflush(stdin);
scanf("%c", &choice);
if(choice=='y')
continue;
else
break;
    }
    printf("thanks for using my dequeue-enqueue function\n");
    return 0;
}