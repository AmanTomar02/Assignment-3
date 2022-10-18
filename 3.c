// Write a program to check whether a given number is an even number or an odd number

#include <stdio.h>

int main()
{
    int x;
    printf("enter number :");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("the number %d is even ...", x);
    }

    else
    {
        printf("the number %d is odd...", x);
    }
    return 0;
}