#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter the integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        count++;
        num /= 10;
    }

    printf("Number is: %d\n", count);

    return 0;
}

