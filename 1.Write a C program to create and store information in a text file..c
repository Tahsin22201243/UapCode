#include <stdio.h>
int main()
{
    FILE *file = fopen("Tahsin.txt", "w");
    if (file == NULL)
    {
        printf("Unable to o.\n");
        return 1;
    }
    fprintf(file, "It is a text file.\n");
    fclose(file);
    printf("write to Tahsin.txt\n");
    return 0;
}
