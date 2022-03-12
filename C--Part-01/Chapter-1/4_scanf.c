#include <stdio.h>
#include <conio.h>
void main()
{
  int a, b;
  printf("Enter the value of a \n");  // printf is used to print.
  scanf("%d", &a);                    // scanf is used to take input from the user.

  printf("Enter the value of b \n");
  scanf("%d", &b);

  printf("Sum of a & b is %d", a + b);
  getch(); /* getch() */
}