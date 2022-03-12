#include <stdio.h>
#include <conio.h>
void main()
{
  int num;
  printf("Enter a number \n");
  scanf("%d", &num);
  printf("Divisibility test returns: %d \n", num % 97);

  getch();
}