#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,fact=1;
    int *p1;
    scanf("%d",&n);
    p1=&n;
    for(i=1; i<=*p1; i++)
    {
        fact = fact*i;
    }
    printf("Factorial of Number:\n%d!=%d",n,fact);
    getch();
}

