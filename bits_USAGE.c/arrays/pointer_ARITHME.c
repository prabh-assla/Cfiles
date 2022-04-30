 #include <stdio.h>

 int main(){
     int RESEARCH[] = {1, 2, 3, 4};
     int*i = &RESEARCH[0];
     int*j = &RESEARCH[1];
    int k = j-i; /* not 4 but 1 */
    int l = *j-*i;
    printf("\n%u\t%u\n", i, j);
    printf("%d\t%d\n", k, l);
    j++; /* the address in j even after being promoted by 1 gets promoted by 4 */
    printf("%u\t%d\n", j, *j);
    printf("add no to pointer --> %u\n", i+2);
        printf("subtract no from pointer --> %u\n", j-1);
    if(j>i)
        printf("j is bigger pointer\n\n");
    else
        printf("i is either equal or greater than j\n\n");
    return 0;
 }