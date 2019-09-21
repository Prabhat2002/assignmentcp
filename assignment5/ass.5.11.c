#include<stdio.h>
void main()
{
	int l=1,k=6,j=1,h=5;
	printf("OO*");
	for(int a=1;a<=6;a++)
	{
		printf("O*");
	} 
	printf("\n");
	for(int b=1;b<=5;b++)
	{
		for(int c=1;c<=l;c++)
		{
			printf("OO");
		}
		printf("*");
		for(int d=1;d<=k;d++)
		{
			printf("O*");
		}
		printf("\n");
		if(b<5)
		{
		for(int e=1;e<=j;e++)
		{
			printf("**");
		}
		printf("OO*");
		for(int f=1;f<=h;f++)
		{
			printf("O*");
		}
		h--;
		l++;
		k--;
		j++;
		printf("\n");
	}
	}
}
