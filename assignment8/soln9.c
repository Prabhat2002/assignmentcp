#include<stdio.h>
void main()
{
	int i,n,x,a,sum=0;
	printf("given:");
	scanf("%d",&n);
	printf("give %d numbers:",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a=x;
		if(a%2!=0)
	        sum=sum+a;
	}
	printf("%d",sum);
}



