#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("The two numbers are: ");
    scanf("%d %d",&num1,&num2);
    sum= num1+num2;
    printf("The number is= %d\n",sum);

    avg= (float)sum/2;  //float casting
    printf("The average is= %.2f\n",avg);

    getch();
}
