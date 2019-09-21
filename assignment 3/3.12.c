#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,p,q,r,d,l,u;
printf("enter the values of p,q,r,a,b,c");
scanf("%f,%f,%f,%f,%f,%f",&p,&q,&r,&a,&b,&c);
d=(a*p+b*q+c)/sqrt(a*a+b*b);
if(d==r)
printf("line touches the circle");
else if(d>r)
printf("line does not touches the circle");
else if(d<r)
{
l=sqrt(r*r-d*d);
u=l*d;
printf("line intersects the circle at two points A and B\n");
printf("area of triangle is%f",u);
}
}


