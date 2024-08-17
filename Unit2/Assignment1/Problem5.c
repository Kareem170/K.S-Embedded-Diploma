#include <stdio.h>

int main()
{
    char input ;
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c",&input);
    printf("ASCII value of %c = %d",input,input);
    return 0;
}