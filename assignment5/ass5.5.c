#include<stdio.h>
void main()
{ 
	for(int p=1;p<=3;p++)
	{
	for(int a=1;a<=15;a++)
	{
		printf("*");

	}
	printf("\n");
	for(int b=1;b<=4;b++)
	{

		if(p==3)
                 break;

		printf("*OOOO");
	}
	printf("\n");
        }
}
