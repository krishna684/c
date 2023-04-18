#include <stdio.h>

void main()
{
int fun(int x);
int i,x;
for(i=1;i<=2;i++);
{
x=fun(i);
printf("i=%d v=%d \n",i,x);
}
}
int fun(int x);
{
static int sum=100;
sum=sum+x;
return sum;
}
