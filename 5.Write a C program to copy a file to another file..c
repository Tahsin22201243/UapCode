#include <stdio.h>
int main()
{
    FILE *a1, *a2;
    char ch;

    a1 = fopen("Tahsin.txt", "r");

    if (a1 == NULL)
    {
        printf("Unable file.\n");
        return 1;
    }

    a2 = fopen("Sadman.txt", "w");

    while ((ch = fgetc(a1)) != EOF)
    {
        fputc(ch, a2);
    }

    fclose(a1);
    fclose(a2);

    printf("Complete");
}




