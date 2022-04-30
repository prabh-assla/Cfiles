#include <stdio.h>

int main(){
char names[][15] = {"surbhi", "sarthak", "palak", "prabhalaxmi"}, k;
int i;

printf("%s %s\n", &names[0][0], &names[2][0]);

for(i=0; i<=15; i++){
    k = names[0][i];
    names[0][i] = names[2][i];
    names[2][i] = k;
}

printf("%s %s\n", &names[0][0], &names[2][0]);
    return 0;
}