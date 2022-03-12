#include <stdio.h>
#include <conio.h>
void main()
{
  // 97-122 = a-z  --> ASCII values
  char ch;
  printf("Enter the character: \n");
  scanf("%c", &ch);

  if (ch <= 122 && ch >= 97)
  {
    printf("It is lower case");
  }
  else
  {
    printf("It is upper case");
  }

  getch();
}