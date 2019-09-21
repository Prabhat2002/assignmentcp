#include<stdio.h>
void main()
{
	int a;
	printf("Enter any number=");
	scanf("%d",&a);
	a=a/1000;
	int b;
	b=a%10;
	printf("%d",b);
}
