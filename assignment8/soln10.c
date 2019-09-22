#include<stdio.h>
void main()
{
        int i,n,x,a,q=0;
        printf("give n:");
        scanf("%d",&n);
        printf("give %d numbers:",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		a=x;
		if(a%2!=0)
			q++;
	}
	printf("%d",q);
}

