// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character

#include <stdio.h>
#include <ctype.h>

int main()
{
    char x;

    printf("enter the character : \n");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z')
    {
        printf("The char '%c' is a upper case in nature ...", x);
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("The char '%c' is lower case in nature ...", x);
    }
    else if (isdigit(x))
    {
        printf("The char '%c' is digti in nature ...", x);
    }
    else
    {
        printf("The char '%c' is spacial character  in nature ...", x);
    }
    return 0;
}