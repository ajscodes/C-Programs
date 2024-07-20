/*Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.*/
#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("Enter value of first number: ");
    scanf("%d",&a);
    printf("Enter value of second number: ");
    scanf("%d",&b);
    printf("Enter which type of operation you want to do?(+ for addition, - for subtraction, / for division, * for multiplication): ");
    scanf(" %c",&ch);
    if(ch=='+')
    {
        printf("Your addition of a & b is: %d",a+b);
    }
    if(ch=='-')
    {
        printf("Your subtraction of a & b is: %d",a-b);
    }
    if(ch=='/')
    {
        printf("Your division of a & b is: %d",a/b);
    }
    if(ch=='*')
    {
        printf("Your multiplication of a & b is: %d",a*b);
    }
}