#include <stdio.h>
#include <conio.h>
void main()
{
  int a, b, c, d;

  printf("Enter any four numbers:");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if (a > b && a > c && a > d)
  {
    printf("%d is greatest", a);
  }
  else if (b > c && b > d && b > a)
  {
    printf("%d is greatest", b);
  }
  else if (c > d && c > a && c > b)
  {
    printf("%d is greatest", c);
  }
  else if (d > a && d > b && d > c)
  {
    printf("%d is greatest", d);
  }

  getch();
}