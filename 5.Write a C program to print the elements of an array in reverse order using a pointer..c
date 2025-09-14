#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter:");
    scanf("%d", &n);
    int arr[n], *p = arr;
    for (i = 0; i < n; i++)
    {
        scanf("%d", p+i);
    }

    printf("Reverse: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(p+i));
    }
    getch();
}


