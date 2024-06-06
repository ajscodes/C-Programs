#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the value of lines n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==j)
			{
			printf("* ");
			}
			else
			{
			printf(" ");
			}
		}
		printf("\n");
	}
}
