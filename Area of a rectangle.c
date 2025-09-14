#include<stdio.h>
int main()

{
    float length,width,area;

    printf("Enter the length= ");

    scanf("%f",&length);

    printf("Enter the width= ");

    scanf("%f",&width);

    area = length*width;

    printf("The area of Rectangle= %.2f\n",area);


}
