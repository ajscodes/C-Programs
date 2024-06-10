/*Last digit of entered integer is even or odd?*/
#include<stdio.h>
void main()
{
    int n,c;
    printf("Enter an integer: ");
    scanf("%d",&n);
    c=n%10;
    if(c%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}