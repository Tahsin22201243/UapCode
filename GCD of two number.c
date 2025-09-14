#include<stdio.h>
int main()
{
    int a,b,rem,gcd;

    printf("Enter two :");
    scanf("%d %d",&a,&b);

    while(b!=0)
    {
       rem=a%b;
       a=b;
       b=rem;
    }
    gcd=a;
    printf("The GCD is: %d",gcd);
    return 0;
}
