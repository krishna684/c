#include <stdio.h>
void main()
{
  int *p1;
  int **ptp;
  int a=10;
  p1=&a;
  ptp=&p1;
  *p1=20;
  printf("variable a contains %d \n",a);
  *p1=25;
  printf("variable b contains %d",b);
}
