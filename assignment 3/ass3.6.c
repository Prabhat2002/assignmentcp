#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,k,t,p,m,n,l,r;
printf("enter the values of a,b,c");
scanf("%f,%f,%f",&a,&b,&c);
k=(b*b)-4*a*c;
t=sqrt(k);
p=sqrt(-k);
if(k>0)
{
m=(-b+t)/(2*a);
n=(-b-t)/(2*a);
printf("roots of equation is%f,%f",m,n);
}
else if(k==0)
{
m=(-b+t)/(2*a);
printf("roots of equation is%f,%f",m,m);
}
else if(k<0)
{
m=(-b)/(2*a);
l=p/(2*a);
r=p/(2*a);
printf("roots of equation are %f+%fi , %f-%fi",m,l,m,r);
}
}

