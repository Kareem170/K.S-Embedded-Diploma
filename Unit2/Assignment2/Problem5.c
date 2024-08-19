#include <stdio.h>

int main()
{
    char input;
    
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c",&input);

    if( (input >= 65 && input <= 90) || (input >= 97 && input <= 122) )
        printf("%c is an alphabet",input);
    else
        printf("%c isn't an alphabet",input);

    return 0;
}