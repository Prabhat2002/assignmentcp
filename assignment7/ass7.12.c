#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter real & imaginary part of umber=");
	scanf("%d %d",&a,&b);
	if((a>0)&&(b>0))
	{
		printf("%d+%di\n",a,b);
		printf("Nice looking form");
	}
	
	else if((a==0)&&(b!=0))
		{
		printf("%di\n",b);
		printf("Nice looking form");		
		}

	 else if((a!=0)&&(b==0))
                {
                printf("%d",a);
		printf("\n");
                printf("Nice looking form");
                }

	 else if((a<0)&&(b>0))
        {
                printf("%d+%di\n",a,b);
                printf("Nice looking form");
        }

	  else if((a>0)&&(b<0))
        {
                printf("%d%di\n",a,b);
                printf("Nice looking form");
        }

         else if((a==0)&&(b==0))
	 {
		 printf("0");
		   printf("Nice looking form");
	 }

	else
	{

	}


}
