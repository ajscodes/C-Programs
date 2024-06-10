//Find out largest number from given three numbers. 
#include<stdio.h>
void main()
{
	int a,b,c,r;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	r=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d",r);
}

