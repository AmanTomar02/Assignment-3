// Write a program to check whether a given number is divisible by 5 or not

#include <stdio.h>

int main()
{
    int x;
    printf("enter number :");
    scanf("%d", &x);

    if (x%5==0)
    {
        printf("the number %d is divisible by 5 ...", x);
    }

    else
    {
        printf("the number %d is not divisible by 5...", x);
    }

    return 0;
}