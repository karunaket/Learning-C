#include <stdio.h>
#include <conio.h>
void main()
{
  int a = 5;
  int b = 7;
  int z;
  z = b * a; // legal
  // b * a = z; Illegal
  printf("The value of z is: %d \n", z);
  printf("The value of a+b is: %d \n", a + b);
  printf("The value of a-b is: %d \n", a - b);
  printf("The value of a*b is: %d \n", a * b);
  printf("The value of a/b is: %d \n", a / b);
  getch();
}