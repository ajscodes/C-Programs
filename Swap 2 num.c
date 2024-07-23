/*Swap two numbers(Using temporary variable and without using temporary variable)*/
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    /*OR You can do*/
    //z=x;
    //x=y;
    //y=z;
    printf("After Swap: x=%d & y=%d",x,y);
}