#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("Enter any number=");
	scanf("%d %d",&a,&c);
	d=c;
	e=c;
	f=c;
	b=a;
	int m=0;
	int g;
	g=c;
		 for(int n=1;n>=1;n++)
		 {
			
			 if(c>=0)
			 {
				 c=c/10;
				 m++;
			 }
			 if(c==0)
			 {
				 break;
			 }
		 }
	for(int q=1;q<=2;q++)
	{
		printf("%d",a);
		for(int w=1;w<=m;w++)
		{
			printf(" ");
		}
	}
        printf("\n");
        for(int t=1;t<=2;t++)
        {
        for(int r=1;r<=2;r++)
        {
                printf("%d ",g);
        }
        printf("\n");
        }


}
