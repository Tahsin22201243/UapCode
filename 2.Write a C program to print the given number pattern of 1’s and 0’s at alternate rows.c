#include <stdio.h>

int main()
{
    int rows, columns;

    printf("Enter  rows: ");
    scanf("%d", &rows);

    printf("Enter columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= columns; j++)
            {
                printf("1 ");
            }
        }
        else
        {
            for (int j = 1; j <= columns; j++)
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}}
