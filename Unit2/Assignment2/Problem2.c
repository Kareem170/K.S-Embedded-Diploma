#include <stdio.h>

int main()
{
    char str;
    
    printf("Enter an alphabet: ");
    fflush(stdout);
    scanf("%c",&str);
    
    if( str == 'a' || str == 'A' || str == 'e' || str == 'E' || str == 'o' ||  
        str == 'O' || str == 'i' || str == 'I' || str == 'u' || str == 'U')
        printf("%c is vowel",str);    
    
    else
        printf("%c is consonant",str);

    return 0;
}