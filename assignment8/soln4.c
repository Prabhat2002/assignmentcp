#include<stdio.h>
void main()
{
	int i,n,x,y,m,k,z,sum=0;
        printf("give n:");
        scanf("%d",&n);
        printf("give %d numbers:",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		y=x/10;
		z=y/10;
		k=x%10;
		m=(z*10)+k;
		sum=sum+m;
	}
	printf("%d",sum);
}

