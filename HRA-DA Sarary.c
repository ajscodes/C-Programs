/*Enter basic salary of an employee and calculate Gross salary according to given conditions:*/
/*- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of Basic*/
/*- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic*/
/*- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic*/
#include<stdio.h>
void main()
{
    int n,HRA,DA;
    printf("Enter salary: ");
    scanf("%d",&n);
    if(n>=10000)
    {
        HRA=0.20*n;
        DA=0.80*n;
    }
    if(n>=20000)
    {
        HRA=0.25*n;
        DA=0.90*n;
    }
    if(n>=30000)
    {
        HRA=0.30*n;
        DA=0.95*n;
    }
    printf("Salary with HRA & DA is: %d",n+HRA+DA);
}