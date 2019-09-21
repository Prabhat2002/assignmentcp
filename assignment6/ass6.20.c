#include<stdio.h>
void main()
{
	int p=66,m=67,n=3;
	printf("A\n");
	for(int a=1;a<=5;a++)
	{
		for(int b=p;b<=m;b++)
		{
			printf("%c",b);
		}
		printf("\n");
		p=m+1;
		m=m+n;
		n++;
	}
}
