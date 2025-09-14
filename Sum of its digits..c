#include<stdio.h>
 int digit(int n)
{
    int temp,r,sum=0;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
        return sum;

    }
}



int main()
{
    int n;
    printf("Enter:");
    scanf("%d",&n);
    int p = digit(n);
    printf("Sum of Digits:%d\n",p);
    return 0;

}
