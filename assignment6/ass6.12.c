#include<stdio.h>
void main()
{
	int p=101;
	for(int a=65;a<=70;a++)
	{
		for(int c=65;c<=a;c++)
		{
                 printf("%c",c);
		}

		for(int b=97;b<=p;b++)
                {
			printf("%c",b);
                }
	p--;
	printf("\n");
	}
}


