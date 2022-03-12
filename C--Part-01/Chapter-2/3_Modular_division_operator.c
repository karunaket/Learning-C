#include <stdio.h>
#include <conio.h>
#include <math.h>                // / ---> Displays quotient
void main()                      // % ---> Displays remainder
{
  printf("5 when divided by 2 leaves a remainder of %d \n", 5 % 2);
  printf("-5 when divided by 2 leaves a remainder of %d \n", -5 % 2);
  printf("5 when divided by -2 leaves a remainder of %d \n", 5 % -2);

  // No operator is assumed to be present
  // printf("The value of 4*5 is %d \n",(4)(5)); --> Will not return 20.It is wrong!!

  printf("The value of 4*5 is %d \n", (4) * (5)); // Right!!

  // There is no operator to perfor exponentiation in C.
  printf("The value of 4 ^ 5 is %d \n", 4 ^ 5); // --> Will not produce 4 to the power 5
  printf("The value of 4 to the power 5 is %f \n", pow(4, 5));

  printf("The value of 6 + 5 is %d \n", 6 + 5);
  printf("The value of 6 + 5.6 is %f \n", 6 + 5.6);
  printf("The value of 6.1 + 5.6 is %f \n", 6.1 + 5.6);
  printf("The value of 5/2 is %d \n", 5 / 2);
  printf("The value of 3.0/9 is %f \n", 3.0 / 9);

  getch();
}