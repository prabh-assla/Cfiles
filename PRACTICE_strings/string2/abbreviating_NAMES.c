#include <stdio.h>

void ABBREVify(char*names, int i){
        int sum = 0, sum1 = 0;
while(i >= 0){
        while(*names == ' ')
        names++;

        while(*names != ' ' &&  *names != '\0'){
            sum++;
        names++;
        }
    while(*names == ' '){
        sum1++;
        names++;
    }
    if(*names != '\0'){
        names-=sum+sum1;
        printf("%c ", *names);
    }
    else{
        names-=sum+sum1;

        while(*names != '\0'){
        printf("%c", *names);
        names++;
        }

        printf("\n");
        
        i--;
    }
    names+=sum+sum1;

                while(*names == '\0'){
                names++;}
    sum = 0;
    sum1 = 0;
    }
}

int main(){
    char names[5][60] = {"Manjeet Kour ASSLA", 
    "robbie     JOShua    roudalph    EVERStone", 
    "            Shane    Hoerius Levertine III    ", 
    "ALeXiS Drawn        mARMI  Lingster HARIENST", 
    "davIDsies       Dreawqi    barbimension"};

    ABBREVify(names, 4);

return 0;
}