#include <stdio.h>
#include <stdlib.h>

// int compare(const void *a, const void *b){
//     return (*(int*)a - *(int*)b);
// }

// int compare(const void *a, const void *b){
//     if(*(int*)a - *(int*)b > 0)
//     return 1;
//     if(*(int*)a - *(int*)b < 0)
//     return -1;
//     if(*(int*)a == *(int*)b)
//     return 0;
// }

int compare(const void *a, const void *b){
    if(*(int*)a - *(int*)b < 0)
    return 1;
    if(*(int*)a - *(int*)b > 0)
    return -1;
    if(*(int*)a == *(int*)b)
    return 0;
}
int main(){
 
int num[6] = {0, 0, -9, -9, 122, 5};
    qsort(num, 6, sizeof(int), compare);
 
for(int i = 0; i<=5; i++){
        printf("%d\n", num[i]);
}

return 0;
}