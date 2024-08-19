#include <stdio.h>

int main()
{
    int input;
    int sum = 0;
    
    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d",&input);
    
    for (int i=1; i<=input; i++)
        sum+=i;

    printf("Sum = %d", sum);

    return 0;
}