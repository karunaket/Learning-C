#include <stdio.h>
#include <conio.h>
void main()
{
  int a;

  printf("Enter a \n");
  scanf("%d", &a);
  // One liner
  (a < 5 || a <= 5) ? printf("A is less than 5") : printf("A is not less than 5");

  getch();
}