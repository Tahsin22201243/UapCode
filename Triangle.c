#include<stdio.h>
int main()
{
    float base,height,area;
    printf("The base= ");
    scanf("%f",&base);

    printf("The height= ");
    scanf("%f",&height);

    area = 0.5* base* height;

    printf("The area= %.2f",area);

    getch();

}
