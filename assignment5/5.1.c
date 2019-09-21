#include<stdio.h>
void main()
{
	for(int a=1;a<=5;a++)
	{
		if(a%2==1)
		{
			for(int b=1;b<=20;b++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(int c=1;c<=10;c++)
			{
				printf("*O");
			}
			 printf("\n");
		}
	}
}

