#include <stdio.h>
#include <conio.h>
void main()
{
  int days;
  printf("Enter the days \n");
  scanf("%d", &days);

  (days <= 365) ? printf("It is not leap year") : printf("It is leap year");

  getch();
}