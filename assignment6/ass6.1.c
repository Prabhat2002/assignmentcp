#include<stdio.h>
void main()
{
	for(char a='E';a>='A';a--)
	{
		for(int b='A';b<=a;b++)
		{
			printf("%c",b);
		}
		printf("\n");
	}
}
