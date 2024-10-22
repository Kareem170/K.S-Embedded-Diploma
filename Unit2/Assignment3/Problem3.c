/*
    EX3: C Program to Find Transpose of a Matrix

        This program asks user to enter a matrix (size of matrix is specified by user) and this program finds the
        transpose of that matrix and displays it.

*/

#include <stdio.h>

int main()
{
    int row;
    int coulmn;
    float Matrix[50][50];
    float T_Matrix[50][50];

    printf("Enter the number of rows and coulmns in the matrix: ");
    scanf("%d", &row);
    scanf("%d", &coulmn);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            printf("Enter Element A%d%d: ", i + 1, j + 1);
            scanf("%f", &Matrix[i][j]);
        }
    }

    printf("Entered Matrix \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            printf("%f  ", Matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix\n");

    for (int i = 0; i < coulmn; i++)
    {
        for (int j = 0; j < row; j++)
        {
            T_Matrix[i][j] = Matrix[j][i];
            printf("%f  ", T_Matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}