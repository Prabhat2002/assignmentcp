#include<stdio.h>
void main()
{
        int i,n,x,y,z,k,m,sum=0;
        printf("give n:");
        scanf("%d",&n);
        printf("give %d numbers:",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                y=x%10;
		z=x/10;
		m=z%10;
		k=(y*m);
		sum=sum+k;
	}
	printf("%d",sum);
}
                
