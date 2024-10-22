
/*
        EX6: C Program to find the frequency of charcters in string
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[500];
    char target_char;
    int frequency = 0;

    printf("Enter a string: ");
    gets(string1);

    printf("Enter the character to find frequency: ");
    scanf("%c", &target_char);

    for (int j = 0; j < strlen(string1); j++)
    {
        if (string1[j] == target_char)
        {
            printf("The character is found at the location = %d \n", j + 1);
            frequency += 1;
        }
        else if (j == strlen(string1) - 1 && !(frequency))
            printf("The character isn't found\n");
        else
            continue;
    }

    printf("Frequency of charcter %c = %d", target_char, frequency);

    return 0;
}