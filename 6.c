// Write a program to print greater between two numbers. Print one number of both are
// the same

#include <stdio.h>

int main()
{
    int a, b;
    printf("enter numbers :\n");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("%d is the greatest amoung these two .", a);
    }
    else
    {
        printf("%d is the greatest amoung these two .", b);
    }
    return 0;
}