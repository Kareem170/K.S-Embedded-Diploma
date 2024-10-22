/*
    EX1: Example of Multidimensional Array In C
        Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where,
        elements of matrix are entered by user.
*/

#include <stdio.h>

int main()
{
    float Matrix1[2][2];
    float Matrix2[2][2];

    printf("Enter The elements of 1st matrix\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element A%d%d:", i + 1, j + 1);
            scanf("%f", &Matrix1[i][j]);
        }
    }

    printf("Enter The elements of 2nd matrix\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element B%d%d:", i + 1, j + 1);
            scanf("%f", &Matrix2[i][j]);
        }
    }

    printf("Sum of Matrices:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%f   ", Matrix1[i][j] + Matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}