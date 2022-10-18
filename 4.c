// Write a program to check whether a given number is an even number or an odd number without using % operator.

/*  if num & 1 == 0 ---->> its even
    if num & 1 == 1 ---->> its odd
*/

#include <stdio.h>

int main()
{
    int x;
    printf("enter number :");
    scanf("%d", &x);
    if (x & 1 == 0)
    {
        printf("The number %d is even..", x);
    }
    else
    {

        printf("The number %d is odd..", x);
    }

    return 0;
}