#include <stdio.h>
#include <conio.h>
#include <windows.h>

void cal ( int yr, int mo, int fd, int da); 
void gotoxy (short int col, short int row); 

char *months[]={ "January", "February, "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main() 
{
int days[ 12] = {31, 28, 31, 30,31, 30, 31,31, 30, 31, 30};
 long int ndays, Idays, tydays, tdays; 

int d, i, m, fday, y;
 char ch; 

printf("\nEnter year(1900 onwards) & month(number):");
scanf ("%d %d", &y, &m);

while(1){
ndays = (y -1)*365l; 
Idays = (y-1)/4-(y-1)/ 100 + (y -1)/400; 

tdays = ndays + Idays; 

if ((y% 100==0 && y % 400 ==0) || (y % 4 ==0 && y%100!=0))
 days[ 1] = 29;
 else
 days[ 1]= 28; 

d= days[ m-1];

 tydays = 0; 

for (i=0;i<=m-2; i++)
tydays = tydays+ days[i];

 tdays = tydays+ tdays; 

fday = tdays % 7; 

cal (y, m, fday, d); 
ch = getkey();

switch(ch)
{
case 77:
if(m==12)
{
y++;
m=1;
}
else
m++;
break;

case 72:
y++;
continue;

case 75:
if(m==1)
{
y--;
m=12;
}
else
m--;
break;

case 80:
y--;
continue;

case 1:
exit(0);

}
}
return 0;}vold cal (int yr, int mo, int fd, int da )
{
inl i,r,c;
char a;

gotoxy ( 25,2);
printf("%s %d, months[ mo- 1],yr);

gotoxy ( 5, 5);
printf("..............................................................");

gotoxy ( 10, 6);
printf ("Mon Tue Wed Thu Fri Sat Sun");

gotoxy (5, 7);
printf("..............................................................");

r=9;
c = 11+6*fd;
for (i= 1;i<=da ; i++)
{
gotoxy(c,r);
printf("%d", i);

if(c<= 41)
c=c+6;

else
{
c=11;
r=r+1;
}
}

gotoxy (5, 15);
printf("..............................................................");

gotoxy (11, 17);
printf("UP-Next Year      DOWN-Prev Year");

gotoxy (11, 18);
printf("RIGHT-Next Month     LEFT-Prev Month");

gotoxy (27, 20);
printf("Esc - Exit");

}

int getkey()
{
int ch;
ch = getch();
if(ch == 224|| 0)
{
ch = getch();
return ch;
}

return ch;
}

void gotoxy (short int col, short int row)
{
HANDLE hStdout = GetStdHandle (STD_OUTPUT_HANDLE );
COORD position={col, row};
SetConsoleCursorPosition (hStdout, position );
}