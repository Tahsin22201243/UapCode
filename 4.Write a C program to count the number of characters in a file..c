#include <stdio.h>

int main() {
    FILE *file = fopen("Tahsin.txt", "r");
    if (file == NULL) {
        printf("Unable file.\n");
        return 1;
    }

    int Count = 0;
    while (fgetc(file) != EOF) {
        Count++;
    }

    fclose(file);

    printf("Characters of Number are: %d\n", Count);

    return 0;
}


