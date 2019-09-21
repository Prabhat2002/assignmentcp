#include<stdio.h>
void main()
{
float a,b;
printf("enter the values of a,b\n");
scanf("%f,%f",&a,&b);
if(a==0)
{
printf("line is vertical");
}
else
{
float s;
s=(-b)/a;
printf("value of slope %f\n",s);
printf("line is not vertical");
}
}

