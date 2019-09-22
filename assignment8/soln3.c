#include<stdio.h>
void main()
{
        int i,n,x,y,z,sum=0;
        printf("give n:");
        scanf("%d",&n);
        printf("give %d numbers:",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		y=x/10;
		z=y%10;
		sum=sum+z;
	}
	printf("%d",sum);
}

