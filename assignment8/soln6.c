#include<stdio.h>
void main()
{
        int i,n,x,y,z,m,k,p,sum=0;
        printf("give n:");
        scanf("%d",&n);
        printf("give %d numbers:",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		y=x/10;
		z=x%10;
		k=y/10;
		m=y%10;
		p=(k*100)+(z*10)+m;
		sum=sum+p;
	}
	printf("%d",sum);
}
		

