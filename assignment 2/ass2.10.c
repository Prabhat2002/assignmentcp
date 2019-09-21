#include<stdio.h>
#include<math.h>
int main()
{
float h,k,r,s,d,u;
printf("enter the values of h,k,r,s");
scanf("%f,%f,%f,%f",&h,&k,&r,&s);
d=(h-s);
u=sqrt(r*r-d*d);
printf("length of chord is %f",2*u);
}

