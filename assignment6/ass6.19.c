#include<stdio.h>
void main()
{
	int m=70,p=6;
	for(int n=1;n<=6;n++)
	{
		for(int b=1;b<=p;b++)
                {
                        printf(" ");
                }

	for(int a=m;a<=70;a++)
	{
		printf("%c",a);
	}
	p--;
	m--;
	printf("\n");
	}
}
