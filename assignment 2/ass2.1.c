#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	printf("Enter Sides Of The Tringle=");
	scanf("%d %d %d",&a,&b,&c);
	float s;
	float A;
	s=(a+b+c)/2;
	A=s*(s-a)*(s-b)*(s-c);
	float p;
	p=sqrt(A);
	printf("%f",p);
}
