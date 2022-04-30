#include <stdio.h>

void alphabeticise(char *names, int i){
    int position[5], j = 0;
while(i >= 0){
    while(*names != '\0'){
        position[j] = *names;
    }
    names++;
    j++;
    i--;
}
}

int main(){
    char names[][18] = {"trucy", "peter", "lucifer", "AERIS", "shawn"};
alphabeticise(names, 4);

return 0;
}