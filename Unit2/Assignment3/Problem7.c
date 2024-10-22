
/*
        EX6: C Program to find the length of a string without using strlen() built-in function
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[500];
    int str_length = 0;

    printf("Enter a string: ");
    gets(string1);

    for (int i = 0; string1[i] != '\0'; i++)
    {
        str_length++;
    }

    printf("Length of string = %d", str_length);

    return 0;
}