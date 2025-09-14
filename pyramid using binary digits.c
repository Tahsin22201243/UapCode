#include<stdio.h>
int main()
{
    int col,row,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)

        {
            if(row==1||row==n||col==1||col==n)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        {
            printf("\n");
        }


    }
}

