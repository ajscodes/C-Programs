/* Odd or even using bitwise operator.*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter value: ");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd"); 
    }
}