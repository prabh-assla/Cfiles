 #include <stdio.h>
#include <stdlib.h>

int main(){
    for(;;){

char option;
printf("SELECT ACTION ---\na.) factorial finder\nb.) prime no finder\nc.) odd-even finder\nd.) exit\n");
fflush(stdin);
scanf("%c", &option);

    switch(option){
        case 'a': //to find the factorial
        {
        int a, b=1, prod=1;
        printf("type any num\t");
        fflush(stdin);
        scanf("%d", &a);
        do{
            b++;
            prod *= b;
        }while(b<a);
        printf("factorial %d! = %d\n", a, prod);
        }
        break;

        case 'b': //to find the prime no
        {int i, j;
        printf("type any num\t");
        fflush(stdin);
        scanf("%d", &i);
        if(i==2)
        printf("%d is a prime no\n", i);
        if(i==1)
        printf("%d is neither prime nor composite no\n", i);
        else
            for(j=2; j<i; j++)
                {if(i%j==0)
                {printf("%d is a composite no\n", i);
                break;} //don't put break outside curly~wurly
                else
                {if(j!=(i-1))
                continue;
                else
                printf("%d is a prime no\n", i);
                }}
        }
        break;

        case 'c' : //to find odd-even
        {
                        int p;
                        printf("type any number\t");
                        fflush(stdin);
                        scanf("%d", &p);
                        if(p%2==0)
                        printf("%d is an even number\n", p);
                        
                        else
                        printf("%d is an odd number\n", p);
        }
        break;
      
        case 'd' : //to exit the program
            printf("thanks for using this program\nSEE YOU AGAIN\n");
        exit(9);
    }
char choice;
printf("do you wish to continue --- y/n\t");
fflush(stdin);
scanf("%c", &choice);

if(choice=='y')
continue;

if(choice=='n')
printf("thanks for using this program\nSEE YOU AGAIN\n");
break;
    }
return 0;
}