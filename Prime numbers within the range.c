#include <stdio.h>

int main()
{
    int n, flag=0;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Prime 1 and %d :\n", n);

    for (int num = 2; num <= n; ++num)
    {
        flag = 1;
        for (int i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%d ", num);
        }
    }

    printf("\n");
    getch();
}
