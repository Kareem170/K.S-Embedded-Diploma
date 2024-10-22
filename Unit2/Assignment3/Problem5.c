
/*
        EX5: C Program to Search an element in an Array
*/

#include <stdio.h>

int main()
{
    int no_of_elements;
    float wanted_element;
    float Numbers[100];
    int item_found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &no_of_elements);
    for (int j = 0; j < no_of_elements; j++)
    {
        printf("Enter Element no.%d: ", j + 1);
        scanf("%f", &Numbers[j]);
    }

    printf("Enter the element to be searched: ");
    scanf("%f", &wanted_element);

    for (int j = 0; j < no_of_elements; j++)
    {
        if (Numbers[j] == wanted_element)
        {
            printf("The Number is found at the location = %d \n", j + 1);
            item_found = 1;
        }
        else if (j == no_of_elements - 1 && !(item_found))
            printf("The Number isn't found\n");
        else
            continue;
    }

    return 0;
}