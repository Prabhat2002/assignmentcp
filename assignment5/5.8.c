#include<stdio.h>
void main()
{
	int p=3;
	for(int a=0;a<10;a++)
	{
		for(int b=0;b<20;b++)
		{
			if(((a>1)&&(a<8)&&((a+b)>=8)&&((a+b)<=p))||(a==9)||(a==8))
			{
				printf("O");
			}
			else
			{
				printf("*");
			}
		}
	       p=p+3;	
		printf("\n");
	}
}
