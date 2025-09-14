#include<stdio.h>
int main()
{
    float F,c;
    printf("Fahrenheit = ");

    scanf("%f",&F);

    c = (F-32)/1.8;


    printf("Enter Centigrade= %.2f\n",c);
}
