// Write a program which takes the month number as an input and display number of days in that month

#include <stdio.h>

int main()
{
    int x;

    printf("enter the character : \n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("JANUARY - 31 DAYS");
        break;
    case 2:
        printf("FABRURY - 28 DAYS");
        break;
    case 3:
        printf("MARCH - 31 DAYS");
        break;
    case 4:
        printf("APRIL - 30 DAYS");
        break;
    case 5:
        printf("MAY - 31 DAYS");
        break;
    case 6:
        printf("JUNE - 30 DAYS");
        break;
    case 7:
        printf("JULY - 31 DAYS");
        break;
    case 8:
        printf("AUGUST - 31 DAYS");
        break;
    case 9:
        printf("SEPTEMBER - 30 DAYS");
        break;
    case 10:
        printf("OCTOBER - 31 DAYS");
        break;
    case 11:
        printf("NOVEMBER - 30 DAYS");
        break;
    case 12:
        printf("DECEMBER - 31 DAYS");
        break;
    }
    return 0;
}