// Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include <stdio.h>

int main()
{
    int x;

    printf("enter the number :\n");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        if (x % 3 == 0)
        {
            printf("the number %d is divisible by 2 and 3 ", x);
        }
    }
    else
    {
        printf("the number %d is not divisible by 2 and 3 ", x);
    }

    return 0;
}