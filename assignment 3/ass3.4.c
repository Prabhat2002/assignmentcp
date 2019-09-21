#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the sides of triangle a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
if((a*a)==(b*b+c*c))
{
printf("angle A is a right angle");
}
else
printf("angle A is not a right angle triangle");
}
