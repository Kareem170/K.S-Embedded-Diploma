#include <stdio.h>

int main()
{
    float a,b,temp ;
    
    printf("Enter value of a: ");
    fflush(stdout); fflush(stdin);
    scanf("%f",&a);

    printf("Enter value of b: ");
    fflush(stdout); fflush(stdin);
    scanf("%f",&b);
    
    temp = b;
    b = a;
    a = temp;

    printf("After swapping, value of a = %f",a);
    printf("\nAfter swapping, value of b = %f",b);
    return 0;
}