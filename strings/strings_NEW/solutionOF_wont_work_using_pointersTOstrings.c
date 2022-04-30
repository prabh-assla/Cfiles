#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char*names[3], characters[60], *pointer;
    int length, i;

    for(i=0; i<=2; i++){
        printf("name%d - ", i+1);
        scanf("%s", characters);
        length = strlen(characters);

    pointer = (char*) malloc(length+1); 
    /* '+1' for accomodating \0 */
    /* (char *) highlights typecasting feature */
    strcpy(pointer, characters);

    names[i] = pointer;
    }

    for(i=0; i<=2; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}