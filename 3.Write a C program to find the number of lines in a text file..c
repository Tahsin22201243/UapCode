#include <stdio.h>
int main()
{
    FILE *file = fopen("Tahsin.txt", "r");
    if (file == NULL)
    {
        printf("Unable file.\n");
        return 1;
    }

    int Count = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            Count++;
        }
    }

    fclose(file);
    printf("Lines: %d\n", Count);

    return 0;
}


