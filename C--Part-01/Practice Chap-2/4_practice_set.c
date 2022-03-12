#include <stdio.h>
#include <conio.h>
void main()
{
  int x = 2, y = 3, z = 3, r = 1;
  printf("Step by step evaluation of 3*x/y-z+r is: %d", 3 * x / y - z + r);

  //     3*2/3-3+1
  // --> 6/3-3+1
  // --> 2-3+1
  // --> 3-3
  // --> 0

  getch();
}