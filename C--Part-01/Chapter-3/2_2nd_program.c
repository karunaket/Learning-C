// WAP to print whether a person is eligible to drive or not

#include <stdio.h>
#include <conio.h>
void main()
{
  int a;
  printf("Enter your age \n");
  scanf("%d", &a);

  if (a > 18)
  {
    printf("You can drive! \n");
  }
  else
  {
    printf("You cannot drive!");
  }

  getch();
}
