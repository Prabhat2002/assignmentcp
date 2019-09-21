#include<stdio.h>
void main()
{
        int n;
        printf("Enter number of input=");
        scanf("%d",&n);
        int ch[n];
        printf("Enter entries=");
        for(int a=0;a<n;a++)
        {
                scanf("%d",&ch[a]);
        }
         for(int b=0;b<n;b++)
        {
		
                printf("%d",ch[b]);
		if(b==0)
		{
			printf(";");
		}
		if((b<(n-1))&&(b!=0))
                printf(",");
        }
     int p=0;
         for(int c=0;c<n;c++)
        {
              p=p+ch[c];
        }
         printf("\n sum=%d",p);
}


