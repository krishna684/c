#include <stdio.h>
void message();
int main()
{
  printf("welcome to main function \n");
  message();
  printf("after function call");
  return 0;
}
void message()
{
  printf("welcome to user defined function");
}
