#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter the lowercase: ");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("The lowercase letter is: %c",upper);
    getch();
}
