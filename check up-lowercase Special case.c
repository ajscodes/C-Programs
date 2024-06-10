#include<stdio.h>
void main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("uppercase");
    }
    else if (ch>=97 && ch<=122)
    {
        printf("lowercase");
    }
    else
    {
        printf("Special case");
    }
}