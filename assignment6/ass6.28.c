#include<stdio.h>
void main()
{
	int p=1,m;
	for(int a=1;a<=21;a=a+p)
	{
		m=1;
		for(int b=1;b<=a;b=b+m)
		{
			printf("%d  ",b);
			m++;
		}
	        printf("\n");
		p++;
	}
}
