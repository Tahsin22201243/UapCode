#include <stdio.h>
int main()
{
    FILE *file = fopen("Tahsin.txt", "r");
    if (file == NULL)
    {
        printf("The file is not valid.\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);
    return 0;
}

