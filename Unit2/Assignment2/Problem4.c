#include <stdio.h>

int main()
{
    float num;
    
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%f",&num);
    
    (num > 0)? printf("%f is positive",num)  :  ( (num < 0)? printf("%f is negative",num) : printf("You Entered Zero") );
    
    return 0;
}