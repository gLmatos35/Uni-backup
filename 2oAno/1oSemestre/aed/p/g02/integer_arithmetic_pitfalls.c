//
// Tomás Oliveira e Silva, AED, October 2021
//
// explain the program output
//
// try also compiling the program with the -Wsign-compare compilation flag
//

#include <stdio.h>
#include <limits.h>

int main(void)
{
  unsigned int i = 1;
  int j = -1;
  int k = -2147483648;
  k = k + 1;

  printf("original i = %u (%d)\n", i, i);
  printf("original j = %d (%u)\n", j, j);
  printf("original k = %d ([%d; %d])\n",k, INT_MIN, INT_MAX);
  // compare i with j
  if(i > j)
    printf("i > j is true\n");
  else
    printf("i > j is false\n");
  // replace k by its absolute value and print the result
  
  if(k < 0) {
    k = -k;
    printf("K is smaller than 0\n");
  }
    
  printf("absolute value of k = %d\n",k);
  return 0;
}
