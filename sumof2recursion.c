#include<stdio.h>

int y;

int add(int m, int n)
{
    if(n == 0)
        return m;

   
    y = add(m, n-1) + 1;
    return y; 
}

int main()
{
   
    int a, b, r;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    r = add(a, b);    
    printf("\n\nSum of two numbers is: %d\n\n", r);

    return 0;
}
