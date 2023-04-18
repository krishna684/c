#include <stdio.h>
void main ()
{
  int a,b;
  int *p1;
  printf("enter a value\n);
         scanf("%d",&a);
         p1=&a;
         *p1=*p1+2;
         printf("variable a contains=%d\n"a);
         printf(*p1 contains=%d \n",*p1);
                b=*p1;
                printf("variable b contains=%d\n",b);
                }
            
