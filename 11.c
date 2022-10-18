// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5, total;
    printf("enter the marks of the all subjects : \n");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;

    if (total > 165)
    {
        printf("passed with toatal marks of %d .", total);
    }
    else
    {
        printf("failed because se scored the marks %d.", total);
    }

    return 0;
}