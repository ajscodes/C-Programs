#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the value of how many lines you want to print?: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)//Row changer.
	{
		for(j=1;j<=i;j++)//Column changer.
		{
			printf("*");
		}
		printf("\n");
	}
}
