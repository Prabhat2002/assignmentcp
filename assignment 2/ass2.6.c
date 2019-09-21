#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float r,p,q;
printf("enter the values of a,b,c\n");
scanf("%d,%d,%d",&a,&b,&c);
p=(-a)/2;
q=(-b)/2;
r=sqrt(p*p+q*q-c);
printf("center of the circle is %f,%f\n",p,q);
printf("radius of the circle is %f",r);
}
