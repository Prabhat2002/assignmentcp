#include<stdio.h>
void main()
{
        int i,n,x,a,sum=0;
        printf("give n:");
        scanf("%d",&n);
        printf("give %d numbers:",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		a=(i*x);
		sum=sum+a;
	}
	printf("%d",sum);
}

