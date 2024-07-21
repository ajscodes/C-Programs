#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Normal order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nReverse order: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}