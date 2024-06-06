#include<stdio.h>
void main()
{
	int i,j,n,num=1;
	char ch='A';
	printf("Enter number of lines: ");
	scanf("%d",&n);
	printf("You want pattern of lines %d\n",n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",num++);
			}
		}
		else
		{
				for(j=1;j<=i;j++)
				{
					printf("%c",ch++);
				}
		}
		printf("\n");
	}
}

