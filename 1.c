// write a program to check whether a given number is positive or non-positive

#include <stdio.h>

int main()
{
    int x;
    printf("enter number :");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("the number %d is positive...", x);
    }

    else
    {
        printf("the number %d is  negative...", x);
    }
    return 0;
}