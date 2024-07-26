/*check whether the triangle is isosceles, equilateral, scalene or right angled triangle.*/
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the value of three sides: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
        printf("right angle");
    }
    else{
    switch (a==b && b==c)
    {
    case 1:
        printf("Equilateral");
        break;
    
    default:
        switch (a==b || b==c || c==a)
        {
        case 1:
            printf("Isosceles");
            break;
        
        default:
            printf("Scalene");
            break;
        }
    }
    }
}