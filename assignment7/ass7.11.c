#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter coff. of x,y and constant=");
	scanf("%f %f %f",&a,&b,&c);
	printf("Equation of line : %0.1fx+%0.1fy+%0.1f=0\n",a,b,c);
        float x;
        x=-c/a;
        printf("Intersection of the line on x-axis::%0.1f",x);
}
