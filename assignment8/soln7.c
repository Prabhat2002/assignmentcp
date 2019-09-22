#include<stdio.h>
void main()
{
        int i,n,x,a;
        printf("give n:");
        scanf("%d",&n);
        printf("give %d numbers:",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		if(x%2==0)
		a=x;
	}
	printf("%d",a);
}

