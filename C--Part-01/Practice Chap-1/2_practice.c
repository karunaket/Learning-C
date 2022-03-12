#include <stdio.h>
#include <conio.h>
void main()
{
  int length, breadth;
  printf("Enter the length \n");
  scanf("%d", &length);
  printf("Enter the breadth \n");
  scanf("%d", &breadth);
  printf("Area of the rectangle is %d", length * breadth);
  getch();
}