// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the sides of the triangle : \n");
    scanf("%d%d%d", &s1, &s2, &s3);

    if ((s2 + s3 > s1) && (s1 + s3 > s2) && (s1 + s2 > s3))
    {
        printf("TRIANGLE...");
    }
    else
    {
        printf("NOT A TRIANGLE...");
    }
    return 0;
}