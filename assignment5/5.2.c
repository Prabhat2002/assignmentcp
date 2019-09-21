#include<stdio.h>
void main()
{
	for(int a=1;a<=10;a++)
	{
		for(int b=1;b<=20;b++)
		{
			if((a<=3)&&(a>=8)||(a<=3)&&(b>8)||(a>=8)&&(b>=15))
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



