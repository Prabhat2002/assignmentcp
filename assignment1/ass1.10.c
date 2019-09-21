#include<stdio.h>
void main()
{
	int a;
	printf("Enter any number=");
	scanf("%d",&a);
	int m,n,p;
	m=a%10;
	a=a/10;
	n=a%10;
	a=a/10;
	p=a*100+m*10+n;
	printf("%d",p);
}

	
