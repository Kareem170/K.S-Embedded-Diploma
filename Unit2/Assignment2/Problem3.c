#include <stdio.h>

int main()
{
    float num1,num2,num3,Largest;
    
    printf("Enter three numbers: ");
    fflush(stdout);
    scanf("%f %f %f",&num1,&num2,&num3);
    
    Largest = (num1 > num2)? ( (num1 > num3)? num1 : num3 )  :  ( (num2 > num3)? num2 : num3 );
    
    printf("Largest number = %f",Largest);

    return 0;
}