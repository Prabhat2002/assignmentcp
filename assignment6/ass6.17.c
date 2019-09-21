#include<stdio.h>
void main()
{
int n=1,p=65;
    for(int w=1;w<=6;w++)
    {
	for(int a=p;a<=70;a++)
	{
		for(int m=1;m<=n;m++)
		printf("%c",a);
	}
	p++;
       printf("\n");
     	n++;
    }
}
