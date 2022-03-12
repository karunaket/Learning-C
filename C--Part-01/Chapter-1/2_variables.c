#include <stdio.h>
#include <conio.h>
void main()
{

  int a = 3;
  // int b=8.5; // Not Recommended because 8.5 is not an integer
  float b = 8.5;
  char c = 'u';
  int d = 30;
  int e = a + d;
  printf("The value of a is %d \n", a);
  printf("The value of a is %d %d \n", a, a);
  //  [\n]=break the line for C programming like <br> tag in HTML xD.
  printf("The value of a is %f \n", b);
  printf("The value of a is %f %f \n", b, b);

  printf("The value of a is %c \n", c);
  printf("The value of a is %c %c \n", c, c);
  printf("Sum of a and d is %d \n", a + d);
  printf("Sum of a and d is %d \n", e);

  getch();
}
