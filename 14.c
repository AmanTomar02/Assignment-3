// Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>

int main()
{
    int x;

    printf("enter the number :\n");
    scanf("%d", &x);

    if (x % 7 == 0)
    {
        printf("the number %d is divisible by 7 ", x);
    }

     else if (x % 3 == 0)
    {
        printf("the number %d is divisible by 3 ", x);
    }
    else
    {
        printf("the number %d is not divisible by 7 and 3 ", x);
    }

    return 0;
}