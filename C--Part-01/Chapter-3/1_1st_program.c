// # C program to check whether a no. is even or odd

#include <stdio.h>
#include <conio.h>
void main()
{
  int a;
  printf("Enter a number \n", a);
  scanf("%d", &a);

  if (a % 2 == 0)
  {
    printf("%d is even",a);
  }
  else
  {
    printf("%d is odd",a);
  }

  getch();
}