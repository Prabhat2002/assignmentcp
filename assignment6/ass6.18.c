#include<stdio.h>
void main()
{
	int p=65,r=5;
	for(int m=1;m<=5;m++)
	{
		for(int n=1;n<=r;n++)
		{
			printf(" ");
		}
	for(int a=65;a<=p;a++)
	{
		printf("%c",a);
	}
	for(int b=p-1;b>=65;b--)
	{
		printf("%c",b);
	}
	printf("\n");
	p++;
	r--;
	}
}
