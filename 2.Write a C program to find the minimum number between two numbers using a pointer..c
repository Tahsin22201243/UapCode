#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,mul;
    int *p1,*p2;
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    if(*p1<*p2)
        printf("Minimum Number:%d",*p1);
    else if(*p1>*p2)
    printf("Minimum Number:%d",*p2);
    else
        printf("The Number are Same.");
    getch();
}

