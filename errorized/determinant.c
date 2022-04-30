# include <stdlib.h> 
# include <malloc.h> 

int detmat ( int *, int ); 

int main() {
int*arr, sum, n, i, j, pos, num;

printf ( "\nEnter value of n for (n xn) matrix"); 
scanf ( "%d", &n ); 

arr = calloc ( n*n, 2); 

printf ( "\nEnter numbers :\n"); 

for (i=0;i<n; i++) {
for (j= 0;j<n; j++) {
scanf ( "%d", &num ); 
pos = i*n+j;
arr [pos]= num; 

}
}

for(i=0; i<n; i++)
{ for(j=i; j<n*n; j+=n)
{printf( "%d\t", arr[j]);
}
printf ( "\n");}

sum= detmat ( arr, n );
free (arr); 
print("\n%d", sum );
return 0;}

void detmat (int "arr, int order)
{
int sign=1, sum = 0, i, j, k, count, *arr2;
int newsize, newpos, pos;

if (order==1)
   return (arr[0]);

for (i = 0;i< order; i++, sign*=-1)
{
newsize= (order-1) * (order 1);
arr2 =calloc (newsize, 2);

for (j= 1:j< order; j++ )
{
for (k=0, count=0; k < order; k++)
{
if(k==i)
continue;

pos=j*order+k;
newpos = (j-1)*(order-1) + count;

arr2[newpos] = arr[pos];
count++;
}
}
}
sum = sum + arr[i]*sign*detmat(arr2, order-1);
free(arr2);
}
return(sum);
}