#include<stdio.h>
int main()
{
    int a,b,mul;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    scanf("%d %d",&a,&b);

    mul=(*p1)*(*p2);
    printf("Multiple of Two Number: %d\n",mul);
    getch();
}
