#include <stdio.h>
int large(int,int);
int main()
{
int n1,n2;
printf("enter any 2 num");
scanf("%d%d",&n1,&n2);
printf("largest=%d",large(n1,n2));
return 0;
}
int large (int a, int b)
{
if(a>b)
return a;
else
return b;
}
