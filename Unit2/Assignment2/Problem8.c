#include <stdio.h>

int main()
{
    char Operator;
    float operand1 , operand2;
    
    printf("Enter Operator either + or - or * or /: ");
    fflush(stdout);
    scanf("%c",&Operator);
    fflush(stdin);
    
    printf("Enter Two Operands: ");
    fflush(stdout);
    scanf("%f %f",&operand1,&operand2);

    switch (Operator)
    {
    case '+':
        printf("%f + %f = %f",operand1,operand2,operand1+operand2);
        break;

    case '-':
        printf("%f - %f = %f",operand1,operand2,operand1-operand2);
        break;

    case '*':
        printf("%f * %f = %f",operand1,operand2,operand1*operand2);
        break;

    case '/':
        printf("%f / %f = %f",operand1,operand2,operand1/operand2);
        break;

    default:
        printf("Please, Enter a valid operator either + or - or * or /");
        break;
    }

    return 0;
}