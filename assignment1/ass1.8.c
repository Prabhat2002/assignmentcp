#include<stdio.h>
void main()
{
	int a;
	printf("Enter any number=");
	scanf("%d",&a);
	int p=a%10;
	a=a/10;
	int m=a*10+p*2;
	printf("%d",m);
}
