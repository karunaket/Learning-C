#include <stdio.h>
#include <conio.h>
void main()
{
  float celsius = 5, far;
  far = (celsius * 9 / 5) + 32;
  printf("The value of celsius temperature in farenheit is %f", far);
  getch();
}