#include <stdio.h>
#include <stdlib.h>

int main() {
    int null;
  int *ip;
  float *fp;
  ip=(int*)malloc(size of (int));
  if(ip==null)
  {
    printf("out of memory\n");
    exit(1);
  }
  fp=(float*)malloc(size of (float));
  if (fp==null)
  {
    printf("out of memory \n");
    exit(1);
  }*ip=10;
  *fp=12.5;
  printf("ip address %x contains %d\n",&ip,*ip);
  printf("fp address %x contains %f\n",&fp,*fp);
}
  
