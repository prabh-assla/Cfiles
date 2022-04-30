#include <stdio.h>
int main(){
    int i, j, marks[3][3];
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            printf("student%d marks in subject%d is:\t", i, j);
            scanf("%d", &marks[i-1][j-1]);
        }
    }
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            printf("student%d marks in subject%d is: %d\n", i, j, marks[i-1][j-1]);
        }
    }
return 0;
}