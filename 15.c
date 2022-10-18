// 15. Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>

int main()
{
    int x;
    printf("enter the number :\n");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("POSITIVE...");
    }

    else if (x < 0)
    {
        printf("NEGATIVE...");
    }
    else
    {
        printf("ZERO...");
    }

    return 0;
}