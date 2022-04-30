#include <stdio.h>
#include <string.h>

int main(){
    char*WORD = "life is like an adventure", q = strchr(WORD, 'v'), 
    p = strrchr(WORD, 'l'), r = strstr(WORD, "like");
    printf("v occurs at position %d\n", q+1);
    printf("l occurs for last time at position %d\n", p+1);
    printf("'like' occurs at position %d\n", r+1);

    return 0;
}