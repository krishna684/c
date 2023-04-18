#include<stdio.h>
void main()
{
  int var=20;
  int *ip;
  ip=&var;
  printf("address of var variable:%p\n",&var);
   printf("address stored in ip variable:%p\n",ip);
   printf("address of *ip variable:%p\n",*ip);
}
