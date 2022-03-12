// WAP to find whether days entered by the user is a leap year or not. Take input from the user.

#include <stdio.h>
#include <conio.h>
void main()
{
  int days;
  printf("Enter the days \n");
  scanf("%d", &days);

  if (days <= 365)
  {
    printf("%d is not leap year", days);
  }
  else
  {
    printf("%d is leap year", days);
  }

  getch();
}