#include <stdio.h>
#include <string.h>

int main(){
    char*word = "WORD";
    printf("\"%sART\" is an amazing tool\n", strdup(word));
    return 0;
}

//strdup vs strcpy difference --> STUDY! from a teacher;