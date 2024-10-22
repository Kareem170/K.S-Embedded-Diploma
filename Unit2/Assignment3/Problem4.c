
/*
        EX4: C Program to Insert an element in an Array
*/

#include <stdio.h>

int main()
{
    int Insert_Pos;
    int no_of_elements;
    float Inserted_Element;
    float Numbers[100];
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &no_of_elements);
    for (int j = 0; j < no_of_elements; j++)
    {
        printf("Enter Element no.%d: ", j + 1);
        scanf("%f", &Numbers[j]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%f", &Inserted_Element);

    printf("Enter the location: ");
    scanf("%d", &Insert_Pos);

    for (i = no_of_elements; i >= Insert_Pos; i--)
    {
        Numbers[i] = Numbers[i - 1];
    }

    Numbers[i] = Inserted_Element;

    printf("The Array after insertion:");

    for (int k = 0; k < no_of_elements + 1; k++)
    {
        printf("%f  ", Numbers[k]);
    }

    return 0;
}