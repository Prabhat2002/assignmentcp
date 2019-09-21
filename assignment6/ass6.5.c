#include<stdio.h>
void main()
{
	int p=65,m=69;
	for (int a=1;a<=5;a++)
	{
		for(int b=m;b>=p;b--)
		{
			printf("%c",b);
		}
		m++;
		p=p+2;
		printf("\n");
	}
}
