/*
        EX8: C Program to Reverse String Without Using Library Function
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[500];
    int temp;

    printf("Enter a string: ");
    gets(string1);

    for (int i = 0; i < strlen(string1) / 2; i++)
    {
        string1[i] += string1[strlen(string1) - i - 1];                                   // STORE the addition of the ascii code of 2 charcters
        string1[strlen(string1) - i - 1] = string1[i] - string1[strlen(string1) - i - 1]; // swap the last char
        string1[i] = string1[i] - string1[strlen(string1) - i - 1];                       // swap the other one
    }

    printf("%s", string1);

    return 0;
}