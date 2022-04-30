#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

if(argc > 1){
    int i, multiply = 1;

    for(i=1; i<argc; i++){
        multiply *= atoi(argv[i]);
    }
 
printf("your product is %d\n.", multiply);
}

else{}
return 0;
}