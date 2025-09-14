#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("The two numbers are: ");
    scanf("%d %d",&num1,&num2);

    result= num1+num2;
    printf("The addition is= %d\n",result);

    result= num1-num2;
    printf("The minus is= %d\n",result);

    result= num1*num2;
    printf("The multiple is= %d\n",result);

    result= num1/num2;
    printf("The division is= %d\n",result);

    result= num1%num2;
    printf("The reminder is= %d\n",result);



    getch();
}
