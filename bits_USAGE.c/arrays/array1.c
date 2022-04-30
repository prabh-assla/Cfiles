#include <stdio.h>
int main(){
    int ROLLNO[6], i;
    for(i=0; i<=5; i++){
        printf("type value of rollNO for student%d\t", i+1);
        scanf("%d", &ROLLNO[i]);
    }
    for(i=0; i<=5; i++){
        printf("thus rollNO for student%d is %d\n",i+1, ROLLNO[i]);
    }
    return 0;
}