#include <stdio.h> 
Struct Student 
{ 
int rno; 
char name [25]; 
int m, P, C; 
}std; 
void main () 
{ 
  float tot, avg;
  printf ("enter details \n"); 
  scanf ("%d %s %d%d %d",&std.rno,&std.name,&std.m,&std.p&std.c);
  tot = std.m+std.p+std.c;
  avg = tot/3;
  printf ("rollNo = %d \n",std.rno);
  printf ("name = %s In",std.name);
  printf ("total = %f\n",tot);
  printf ("average = %f \n", avg);
}
