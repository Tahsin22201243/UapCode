#include<stdio.h>
int main()
{
    int n,a,b,c;

    printf("Enter N: ");
    scanf("%d",&n);

    for(a=1; a<n; a++)
    {
        for(b=1; b<n; b++)
        {
            for(c=1; c<n; c++)
            {
                if(a<b && (a*a) + (b*b) == (c*c)) //Equation side
                {
                    printf("The Three Number are: %d, %d, %d\n",a,b,c);
                }
            }
        }
    }
}
