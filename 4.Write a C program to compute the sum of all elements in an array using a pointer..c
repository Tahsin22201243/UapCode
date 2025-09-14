#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int arr[n],*p=&arr;
    for(i=1; i<=n; i++)
    {
        scanf("%d",(p+i));
        sum = sum + *(p+i);
    }
    printf("Sum is =%d\n",sum);
    getch();
}

