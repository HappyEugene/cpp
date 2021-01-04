#include <stdio.h>

int main()
{
  int var = 7;
  int *ptr;
  // declare a pointer
  
  ptr = &var;
  // the value stored inside the pointer
  // becomes the address that is pointing to
  printf("%d\n", *ptr);
  // print out the reference value of the pointer
  // i.e the value that is inside of the thing
  // that is pointing to
  
  int &ref = var;
  // the reference get assigned one time
  // it just becomes a reference to that location in memory
   printf("%d\n", ref);
  

  return (0);
}

/* https://www.youtube.com/watch?v=sxHng1iufQE */
