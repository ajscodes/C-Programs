#include<stdio.h>
#include<math.h>
void findroots(float ,float ,float );
int main()
{
    float a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    findroots(a,b,c);
    return 0;
}
void findroots(float a,float b,float c)
{
    double D = b*b - 4*a*c;
    if(D>=0){
        double r1 = (-b + sqrt(D))/(2*a);
        double r2 = (-b - sqrt(D))/(2*a);
        printf("root 1: %lf",r1);
        printf("root 2: %lf",r2);
    }
    else{
        double realpart = -b/(2*a);
        double imgpart = sqrt((-1)*D)/(2*a);
        printf("root 1: %lf + %lfi\n",realpart,imgpart);
        printf("root 2: %lf - %lfi",realpart,imgpart);
    }
}