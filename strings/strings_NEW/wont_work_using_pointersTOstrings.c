#include <stdio.h>
#include <stdlib.h>

//gives_ERROR

int main(){
    char *name[4];
    int i;
            for(i=0; i<=3; i++){
    printf("name%d - ", i+1);
    fflush(stdin);
    scanf("%s", name[i]);
}
return 0;
}