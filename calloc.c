#include <stdio.h> 
#include <stdlib.h> 
int main () 
{ 
  int null;
  int a,n;
  int *ptr_data;
  printf ("enter amount of memory");
  Scanf ("%d",&a);
  ptr_data = (int *)calloc(a,size of (int));
  if (ptr_data == null) 
  { 
    printf ("error allocating requested memory");
    exit (1);
  }
  for (n=0; n<a;n++) 
  {
    printf ("enter number %d ",n);
    Scanf("%d",&ptr_data[n]);
  }
  Printf ("outPut "); 
  for(n=0;n<a; n++)
    printf ("%d", ptr_data [n]);
  free (Ptr_data);
  return 0;
}
