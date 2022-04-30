#include <stdio.h>
#include <conio.h>
#include <windows.h>

int arr[4][4] = {{1, 4, 15, 7},{8, 10, 2, 11},{4, 3, 6, 13},{2, 9, 5, 0}};

void check(){
    int static sum = 0, k = 1, i, j;
    sum++;
    gotoxy(30, 24);

    printf("no. of moves --> %d", sum);

    for(i=0; i<=3; i++){
        for(j=0; j<=3; j++){
            if(arr[i][j]==0)
            continue;
            else if(arr[i][j]==k)
            k++;
            else
            return;
        } 
    }
exit(0);
}

void box(){
    int i, j;
    for(j=30; j<=42; j++){
        for(i=8; i<=16; i+=2){
            gotoxy(j, i);
            printf("%c", 196);
        }
    }
    for(i=8; i<=16; i+=2){
        for(j=30; j<=42; j+=3){
            gotoxy(j, i);
            printf("%c", 179);
        }
    }
    for(j=33; j<=39; j+=3){
            gotoxy(j, 8);
            printf("%c", 194);
            gotoxy(j, 16);
            printf("%c", 193);
        }
    for(i=10; i<=14; i+=2){
            gotoxy(30, i);
            printf("%c", 195);
            gotoxy(42, i);
            printf("%c", 180);
        }
    for(i=10; i<=14; i+=2){
        for(j=33; j<=39; j+=3){
            gotoxy(j, i);
            printf("%c", 197);
        }
    }
    gotoxy(30, 8);
    printf("%c", 218);

    gotoxy(42, 8);
    printf("%c", 191);

    gotoxy(30, 16);
    printf("%c", 192);

    gotoxy(42, 16);
    printf("%c", 217);
}

void DISPLAY(){
    int i = 9, j = 31, k, l;
    for(k=0; k<=3; k++){
        for(l=0; l<=3; l++){
            if(arr[k][l]==0){
                gotoxy(j,i);
                printf(" ");
            }
            else{
                gotoxy(j,i);
                printf("%d", arr[k][l]);
            }
            j+=3;
        }
        i+=2;
        j=31;
        }
}

int getkey(){
    int i;
    i = getch();
    if(i==0){
        i = getch();
        return i;
    }
return i;
}

void gotoxy(short int j, short int i){
    HANDLE x = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD y = {j, i};
    SetConsoleCursorPosition(x, y);
}

int main(){
    int i, j, scanCODE, l;
    i = 3;
    j = 3;
    box();
    DISPLAY();

    while('p'){
        scanCODE = getkey();
            switch(scanCODE){
                case 72 :    //down-arrow
                if (i == 0){
                    printf("\a");
                    break;
                }
            l = arr[i][j];
            arr[i][j] = arr[i-1][j];
            arr[i-1][j] = l;
            i--;
            DISPLAY();
            break;

                case 75 : //right-arrow
                if (j == 0){
                    printf("\a");
                    break;
                }
            l = arr[i][j];
            arr[i][j] = arr[i][j-1];
            arr[i][j-1] = l;
            j--;
            DISPLAY();
            break;

                case 80 : //up-arrow
                if (i == 3){
                    printf("\a");
                    break;
                }
            l = arr[i][j];
            arr[i][j] = arr[i+1][j];
            arr[i+1][j] = l;
            i++;
            DISPLAY();
            break;

                case 77 : //left-arrow
                if (j == 3){
                    printf("\a");
                    break;
                }
            l = arr[i][j];
            arr[i][j] = arr[i][j+1];
            arr[i][j+1] = l;
            j++;
            DISPLAY();
            break;

            case 27 : //esc-KEY
            exit(0);
            }
        check();
    }
return 0;
}
