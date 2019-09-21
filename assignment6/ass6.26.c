#include<stdio.h>
void main()
{
	int p=7;
	for(int b=4;b<=10;b++)
	{
	for(int a=0;a<=p;a++)
        {
		printf("%d",b*a);
		printf(",");
	}
	if(p>3)
	{
		p--;
	}
	printf("\n");
	}
}
