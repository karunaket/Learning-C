#include <stdio.h>
#include <stdlib.h>
int main()
{
        int marks;
        printf("Enter your marks \n");
        scanf("%d", &marks);
        switch (marks)
        {
        case 91 ... 100:
                printf("A\n");
                break;
        case 81 ... 90:
                printf("B\n");
                break;
        case 71 ... 80:
                printf("C\n");
                break;
        case 61 ... 70:
                printf("D\n");
                break;
        default:
                printf("Fail\n");
                break;
        }
}