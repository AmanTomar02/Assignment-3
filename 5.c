//  Write a program to check whether a given number is a three-digit number or not

#include<stdio.h>

int main()
{
   int x;
    printf("enter number :");
    scanf("%d", &x);
    if (x>100 && x<999)
    {
        printf("The number %d is three digit ..", x);
    }
    else
    {

        printf("The number %d is not three digit..", x);
    }

  return 0;
}