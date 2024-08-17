#include <stdio.h>

int main()
{
    float a,b;
    
    printf("Enter value of a: ");
    fflush(stdout); fflush(stdin);
    scanf("%f",&a);

    printf("Enter value of b: ");
    fflush(stdout); fflush(stdin);
    scanf("%f",&b);
    
    // we can't use xor method with floats only with integers
    a= a+b;

    b = a-b;

    a = a-b;

    printf("After swapping, value of a = %f",a);
    printf("\nAfter swapping, value of b = %f",b);
    return 0;
}