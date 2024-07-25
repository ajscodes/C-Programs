/*Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 70.*/
#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter mark of maths: ");
    scanf("%d",&a);
    printf("Enter marks of df: ");
    scanf("%d",&b);
    printf("Enter marks of cpc: ");
    scanf("%d",&c);
    printf("Enter marks of physics: ");
    scanf("%d",&d);
    printf("Enter marks of eg: ");
    scanf("%d",&e);
    float percentage=(a+b+c+d+e)/5;
    printf("%f\n",percentage);
    if(percentage>70){
        printf("Outstanding Performance");
    }
    if(percentage>=61 && percentage<=70){
        printf("First Class");
    }
    if(percentage>=46 && percentage<=60){
        printf("Second Class");
    }
    if(percentage>=35 && percentage<=45){
        printf("Pass");
    }
    if(percentage<35){
        printf("Congo! You Failed Successfuly");
    }
}