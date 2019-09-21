#include<stdio.h>
void main()
{
	int a;
	printf("Enter any number=");
	scanf("%d",&a);
	int b,c;
	b=a%100;
	c=b%10;
	b=b/10;
	printf("%d",b+c);
}
