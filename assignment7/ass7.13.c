#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter i,j,k of vector");
	scanf("%d %d %d",&a,&b,&c);
	if((b==0)&&(c>0))
	{
		printf("%di+%dk",&a,&c);
	}
	else if((b==0)&&(c<0))
        {
                printf("%di%dk",&a,&c);
        }
	 if((b>0)&&(c>0))
        {
                printf("%di+%dj+%dk",&a,&b,&c);
	}
	 else if((b<0)&&(c>0))
        {
                printf("%di%dj+%dk",&a,&b,&c);
        }
	  else if((b>0)&&(c<0))
        {
                printf("%di+%dj%dk",&a,&b,&c);
         }
	 else
        {
                printf("%di%dj%dk",&a,&b,&c);
    	 }
}
        


