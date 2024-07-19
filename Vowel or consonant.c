/*Check whether given character is vowel or consonant.*/
#include<stdio.h>
/// @brief 
void main()
{
    char ch;
    printf("Enter value: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Your entered character is Vowel.");
    }
    else
    {
        printf("Your entered character is consonant.");
    }
}
