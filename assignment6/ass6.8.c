#include<stdio.h>
void main()
{
	int a,n;
	printf("Enter any number=");
	scanf("%d",&n);
	while(n<0)
	{
		printf("Enter any number again");
		scanf("%d",&a);
		if(a<0)
		{
			continue;
		}
		else
		{
			break;
		}
	}
}
