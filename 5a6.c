//Check whether given character is vowel or consonant. (Using single if only) 
#include<stdio.h>
void main()
{
	char a;
	printf("a: ");
	scanf("%c",&a);
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
	{
		printf("V");
	}
	else
	{
		printf("C");
	}
}

