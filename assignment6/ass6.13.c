#include<stdio.h>
void main()
{
	int p=65;
	for(int a=65;a<=70;a++)
	{
		for(int b=a;b<=p;b++)
		{
			printf("%c",b);
			
		}
		p=p+2;
		printf("\n");
	}
}
