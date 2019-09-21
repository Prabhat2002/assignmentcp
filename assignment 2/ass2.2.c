#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	printf("Enter co-ordinate=");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int m,n,p;
	float t;
	m=(c-a)*(c-a);
	n=(d-b)*(d-b);
	p=m+n;
        t=sqrt(p);
	printf("%.3f",t);
}
