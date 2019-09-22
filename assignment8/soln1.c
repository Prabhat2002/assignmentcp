#include<stdio.h>
void main()
{
	int i,n,x,y,sum=0;
	printf("give n:");
	scanf("%d",&n);
	printf("give %d numbers:",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
	       y=x%10;
	       sum=sum+y;
	}
	printf("%d",sum);
}

