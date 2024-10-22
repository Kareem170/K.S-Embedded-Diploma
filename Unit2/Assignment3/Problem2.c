/*
    EX2: C Program to Calculate Average Using Arrays

    This program takes n number of element from user(where, n is specified by user), stores data in an array
    and calculates the average of those numbers.

*/

#include <stdio.h>

int main()
{
    int num;
    float sum = 0;
    float Numbers[200];

    printf("Enter the number of data: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", &Numbers[i]);
        sum += Numbers[i];
    }

    printf("Average = %f", sum / num);

    return 0;
}