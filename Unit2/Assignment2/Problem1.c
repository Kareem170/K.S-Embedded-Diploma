#include <stdio.h>

int main()
{
    int num;
    printf("Enter the integer you want to check: ");
    fflush(stdout);
    scanf("%d",&num);    
    
    (num%2==0)? printf("%d is even",num) : printf("%d is odd",num);
    
    return 0;
}