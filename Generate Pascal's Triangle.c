#include <stdio.h>

int main()
{
    int row,c=1,x,i,j;
    printf(" Rows: ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(x=1;x<=row-i;x++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0) //Help of Salman Nur Ramim
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
}
