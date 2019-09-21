#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f,g,h;
float x,y,z,k,r,p,u;
printf("enter the values of\ta,b,c,d,e,f,g,h\n");
scanf("%f,%f,%f,%f,%f,%f,%f,%f",&a,&b,&c,&d,&e,&f,&g,&h);
x=(-e)/2;
y=(-f)/2;
z=(-g)/2;
k=(a*x+b*y+c*z+d)/sqrt(a*a+b*b+c*c);
r=sqrt(x*x+y*y+z*z-h);
p=sqrt(r*r-k*k);
u=(3.14)*(p*p);
printf("area of the circle is %f",u);
}


