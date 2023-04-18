#include <stdio.h>

int x;
int y=10;
void main()
{
  x=10;
  void sum();
  sum();
}
void sum()
{
  int sum;
  sum=x+y;
  printf("x=%d \n y=%d \n sum=%d",x,y,sum);
}
