#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,p,q,r;
float x,y;
printf("enter the value of a,b,c\n");
scanf("%d,%d,%d",&a,&b,&c);
printf("enter the value of p,q,r\n");
scanf("%d,%d,%d",&p,&q,&r);
y=(p*c-a*r)/(a*q-p*b);
x=-(b*y+c)/a;
printf("point of intersection is %f,%f",x,y);
}
