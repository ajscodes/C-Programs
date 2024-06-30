/*Multiply and divide a number by 2 without using multiplication/division operator.*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    b=a>>1;
    printf("Division: %d",b);
    c=a<<1;
    printf("\nMultiplication: %d",c);
}