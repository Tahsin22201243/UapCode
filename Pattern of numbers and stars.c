#include<stdio.h>
int main()
{
    int col,row,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)

        {
            if(col==1||col==row)
            {
                printf("%d",col);

            }
            else
            {
                printf("*");
            }
        }

        {
            printf("\n");
        }


    }
}


