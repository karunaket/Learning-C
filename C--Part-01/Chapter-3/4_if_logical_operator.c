#include <stdio.h>
#include <conio.h>
void main()
{
  int age;
  int vipPass = 0;
  // vipPass=1;

  printf("Enter your age \n");
  scanf("%d", &age);
  // if(age>=18 && age<=70)
  if ((age >= 18 && age <= 70) || vipPass == 1)
  {
    printf("You are above 18 and below 70, you can drive \n");
  }
  else
  {
    printf("You cannot drive \n");
  }

  getch();
}