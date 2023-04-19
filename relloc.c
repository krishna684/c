#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
  int null; 
  int *buffer; 
  buffer= (int*)malloc(10* Size of (int));
  if (buffer == null)
  { 
    printf ("error allocating memory");
    exit(1);
  } 
  buffer = (int *)realloc(buffer, 20* size of (int));
  if (buffer==null)
  {
    Printf  ("error reallocating memory");
    free (buffer); exit (1);
    printf ("memory successfully allocated");
    free (buffer); return 0; }
