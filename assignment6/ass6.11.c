#include<stdio.h>
void main()
{
	int p=0;

	for (int a=65;a<=70;a++)
	{
		p++;
		for(int b=a;b<=70;b++)
		{
			printf("%c",b);
		}
		printf("\n");
		for(int c=1;c<=p;c++)
		{
		printf(" ");
	        }
	}

}	


