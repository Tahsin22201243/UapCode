#include<stdio.h>
int main()

{
    //Sqrt means square root
    double a,b,c,s,area;
    printf("Enter 3 values = ");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of a triangle = %.2lf ",area);

}

