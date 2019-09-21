#include<stdio.h>
void main()
{
	int m,p=1,r=7;
	for(int b=1;b<=6;b++)
	{
		m=1;
       for(int a=65;a>=64;a=a+p)
        {
	    if(m==r)
	    {
	    break;
	    }
          printf("%c",a);
          m++;      
        }
       printf("\n");
       p++;
       r--;
       	}
}
