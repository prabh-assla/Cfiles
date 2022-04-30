#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *real, *deal;
    char ch;

    if(argc != 3){
        puts("improper number of arguments\n");
        exit(0);
    }

real = fopen(argv[1], "r");
if(real == NULL){
    puts("can't open source file\n");
    exit(0);
}

deal = fopen(argv[2], "w");

            if(deal == NULL){
                puts("can't open target file\n");
                fclose(real);
                exit(0);
            }
    
    while(!feof(real)){
        ch = fgetc(real);

        if(ch == EOF)
                break;

        else    
                fputc(ch, deal);

        if(ferror){
                perror("PR2.C");
                break;
        }
    }

fclose(real);
fclose(deal);

return 0;
}