// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float r1, r2, disc, dino;
    printf("enter ther number :\n");
    scanf("%d%d%d", &a, &b, &c); //  [-b ± √(b2 - 4ac)]/2a.
    disc = (b * b) - (4 * a * c);
    dino = 2 * a;

    if (disc > 0)
    {
        printf("the roots are real and unequal");
        r1 = (-b + sqrt(disc)) / dino;
        r2 = (-b - sqrt(disc)) / dino;
        printf("the  r1 is %d ", r1);
        printf("the  r2 is %d ", r2);
    }
    else if (disc == 0)
    {
        printf("real and  equal :");
        r1 = -b / dino;
        r2 = r1;
        printf("the  r1 is %d ", r1);
        printf("the  r2 is %d ", r2);
    }

    else
    {
        printf("imagnary");
    }

    return 0;
}