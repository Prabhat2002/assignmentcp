#include<stdio.h>
void main()
{
	int p=11;
	for(int a=0;a<=10;a++)
	{
		for(int b=0;b<20;b++)
		{
			if((a+b)>6)&&((a+b)<=p)||(a==9)||(a==10)
			{
				printf("*");
			}
			
			else
			printf("O");
		}
		printf("\n");
		p++;
	}
}
