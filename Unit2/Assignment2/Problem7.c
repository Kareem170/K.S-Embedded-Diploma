#include <stdio.h>

int main()
{
    int input;
    int factorial = 1;
    
    printf("Enter a Positive integer: ");
    fflush(stdout);
    scanf("%d",&input);

    if(input > 0)
    {
        for (int i=input; i>0; i--)
            factorial*=i;
        printf("Factorial = %d",factorial);    
    }

    else if (input == 0)
    {
        factorial = 1;
        printf("Factorial = %d",factorial);    
    }
        
    else
        printf("Error!!! Factorial of negative numbers doesn't exist");
    
    return 0;
}