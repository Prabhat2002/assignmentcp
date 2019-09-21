#include<stdio.h>
void main()
{ 
	int p=0,m=9;
    for(int q=1;q<=5;q++)
    {
        	for(int b=p;b<m;b++)
		{
			if(b%2==1)
			{
				printf("%d\t",b);
			}
		}
		p+=20;
		m+=20;
    }
      int e=11,r=19;
      for(int w=1;w<=4;w++)
      {
		for(int c=e;c<r;c++)
		{
			if(c%2==0)
			printf("%d\t",c);
		}
		p=p+20;
		m=m+20;
      }
}
