#include<stdio.h>
void main()
{
	for(int a=0;a<=3;a++)
	{
		for(int b=0;b<=9;b++)
		{
			if((a%2==0)&&(b%2==0)||(a%2==1)&&(b%2==1))
			{
				printf("O");
			}
			else
			printf("*");
		}
		printf("\n");
	
	}
}
