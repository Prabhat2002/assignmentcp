#include<stdio.h>
void main()
{
	int ch[2];
	int p,n=0;
	for(int a=1;a<=4;a++)
         {
		 p=1;
		 printf("Enter pair=");
		 for(int b=0;b<=1;b++)
		 {
			 scanf("%d",&ch[b]);
			 p=p*ch[b];
		 }
               n=n+p;
	 }
	printf("%d",n);
}
