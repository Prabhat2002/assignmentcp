#include<stdio.h>
void main()
{       for(int m=1;m<=2;m++)
	{
	for(int a=1;a<=20;a++)
	{
		printf("*");
	}
	printf("\n");
	}

  int l=6,k=2,j=12;	
	for(int b=1;b<=6;b++)
	{
		for(int w=1;w<=l;w++)
		{
			printf("*");
		}
		for(int q=1;q<=k;q++)
		{
			printf("0");
		}
		for(int r=1;r<=j;r++)
		{
			printf("*");
		}
		k=k+3;
		l--;
		j=j-2;
		printf("\n");
	}
	 for(int m=1;m<=2;m++)
        {
        for(int a=1;a<=20;a++)
        {
                printf("0");
        }
        printf("\n");
        }

}
