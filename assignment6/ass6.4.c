#include<stdio.h>
void main()
{
	int p=69,m=73;
	for(int a=1;a<=5;a++)
	{
		for(int b=p;b<=m;b++)
		{
			printf("%c",b);
		}
		m=m-2;
		p--;
		printf("\n");
	}
}
