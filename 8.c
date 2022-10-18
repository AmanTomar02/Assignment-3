// Write a program to check whether a given year is a leap year or not

#include <stdio.h>

int main()
{
    int x, rem;

    printf("Enter the year :\n");
    scanf("%d", &x);
    rem = x % 10;

    if (rem / 4 == 0)
    {
        printf("The year %d is a leap  year ..", x);
    }
    else if (rem == 0)
    {
        printf("The year %d is a century year ..", x);
    }
    else
    {
        printf("The year %d is not a leap year ..", x);
    }

    return 0;
}