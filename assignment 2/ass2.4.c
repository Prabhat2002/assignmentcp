#include<stdio.h>
void main()
{
	float a,b,c;
	printf("enter any number=");
	scanf("%f %f %f",&a,&b,&c);
	printf("Equation=%.0fx+%.0fy=%.0f",a,b,c);
	float m;
	m=(-a)/b;
	printf("\n%f",m);
}
