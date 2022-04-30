# include <stdio.h>

void add_front ( int);
void add_rear ( int );
int retrieve_front ( void );
int retneve_rear ( void);
void display ( void);

int *font, *rear;
int a[26];

int main()
{
int item;
front=NULL;
rear= NULL;

printf ("\nAdding elements at front of a deque: "):
add_front ( 10);
add_front (40);
add_front(30);
display();printf( "\n\nAdding an element at the rear of a deque: ");
add_rear (50):
display();

printf("\n\nRetreiving an element from the front of a deque: ");
item=retrieve_front();
if(item==-1)
printf( "\nDeQueue Empty"):
else
printf ("\n\nFront Item= %d", item);

display();

printf("\n\nRetreiving an element from the rear of a deque: ");
item= retrieve_rear();if(item==-1)
printf( "\nDeQueue Empty ");
else
printf("\n\nRear ltem=%d", item);
display();

return 0;
}

int retrieve_rear (void)
{
int item, i, j;
if (rear==NULL)
{
printf("\n DeQueue Empty");
retum -1;
}
else
{
item= *rear;
i= rear-front;
if (i==0)
{
front= NULL;
rear= NULL
}
else
{
*rear= 0;
rear--;
}
}
retun item;
}

int retrieve_front (void){
int item, i, j;
if( front == NULL)
{
printf( "\n DeQueue Empty ");
return-1;
}
else
{
item= *front;
i= rear-front;
if (i==0)
{
front = NULL;
rear = NULL;
}
else
{
for (j = 0;j<=i-1;j++)
front [ j]= front [j + 1];
*rear = 0;
rear--;
}
}
return item;
}

void add_rear ( int item)
{
int i,j;
if(front== NULL)
{
front = a;
*front = item;
rear = a;
}

else{
i = rear-front;

if(i != 25)
{
rear++;
*rear= item;
}
else
printf ("\nDeQueue full ");
}}

void add_ front ( int item)
{
int i,j:
if (front == NULL)
{
front = a;
*(front) = item;
rear = a;
}
else
{
front a;
j= rear - front;

if (j!= 25)
{
for (i = j+1;i>=0;i--)
front [i] = front [ i - 1];
*(front+0) = item;
rear++;
}
else
printf ("\n DeQueue Full" );
}
}void display (void)
{
int i;
int *p= front;
if (p== NULL)
{
print ("\n\nDeQueue Empty");
}
else
{
printf ("\n");
for(i = 0; i<= (rear - front); i++ )
     printf ("\n a [%d] = %d ",i, *p++ );

}
}