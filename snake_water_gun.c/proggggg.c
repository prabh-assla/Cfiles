#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

int main(){
int comp;
char cc, tt = 'y';

while(tt == 'y'){
srand(time(0));
comp = rand()%3 + 1;

printf("\nstone(*), paper(_), scissor(^) - ");
scanf("%c", &cc);

if(comp == 1){
    //comp is STONE(*)
    if(cc != '*'){
    if(cc == '_')
        printf("\n* : comp; %c : you\n<WON>\n",cc);
    else
        printf("\n* : comp; %c : you\n<LOST>\n",cc);}
    else
    printf("\n* : comp; %c : you\n<DRAW>\n", cc);
}
if(comp == 2){
    //comp is SCISSOR(^)
    if(cc != '^'){
    if(cc == '*')
        printf("\n^ : comp; %c : you\n<WON>\n",cc);
    else
        printf("\n^ : comp; %c : you\n<LOST>\n",cc);}
    else
    printf("\n^ : comp; %c : you\n<DRAW>\n", cc);
}
if(comp == 3){
    //comp is PAPER(_)
    if(cc != '_'){
    if(cc == '^')
        printf("\n_ : comp; %c : you\n<WON>\n",cc);
    else
        printf("\n_ : comp; %c : you\n<LOST>\n",cc);}
    else
    printf("\n_ : comp; %c : you\n<DRAW>\n", cc);
}

printf("CONTINUE--> y/n:");
tt = getche();
fflush(stdin); 
system("cls");
}

printf("thanks for using our GAME.\n");
return 0;
}