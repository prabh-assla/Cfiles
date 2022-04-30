#include <stdio.h>

void DELETION_ofthe(char *arrow){
    while(*arrow != '\0'){
        if(*arrow == 'T' || *arrow == 't'){
            arrow++;
                if(*arrow == 'h' || *arrow == 'H'){
                    arrow++;
                        if(*arrow == 'E' || *arrow == 'e'){
                        arrow++;
                        }
                        else
                        {arrow-=2;
                        printf("%c", *arrow);
                        arrow++;}
                }
        else{
            arrow-=1;
            printf("%c", *arrow);
            arrow++;
    }
}

else{}

    while(*arrow != 'T' && *arrow != 't' && *arrow != '\0'){
        printf("%c", *arrow);
        arrow++;
    }
}
}

int main(){
    char sentence[] = "   wThe liTHEWfe   Pithe thwethe  you WTHE stathey THETHERtHE   powqu   ";

        DELETION_ofthe(sentence);

        printf("\n");
    return 0;
}