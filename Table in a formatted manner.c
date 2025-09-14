#include<stdio.h>
int main()
{
    int col,row,n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        {
            for(col=1; col<=n; col++)
            {
                printf(" %d",row*col);
               ++count;
            }
        }

        {
            printf("\n");
        }

    }

}
