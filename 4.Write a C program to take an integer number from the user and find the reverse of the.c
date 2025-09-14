#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("The reverse number is: %d", reversed);

    return 0;
}
