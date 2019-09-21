#include<stdio.h>
void main()
{
	for(int a=0;a<=5;a++)
	{
		for(int b=0;b<=29;b++)
		{
			if((a%2==1)&&((b%3==0)||(b%5==0)))
			{
				printf("*");
			}
			else
			{
				printf("O");
			}
		}
		printf("\n");
	}
}
