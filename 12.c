// Write a program to check whether a given alphabet is in uppercase or lowercase

#include <stdio.h>

int main()
{
    char x;

    printf("enter the character : \n");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z')
    {
        printf("The char '%c' is a upper case in nature ...", x);
    }
    else
    {
        printf("The char '%c' is lower case in nature ...", x);
    }

    return 0;
}