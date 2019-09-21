#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float A;
printf("enter the values of a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
A=acos(b*b+c*c-a*a)/2*b*c;
printf("value of angle A%f",A);
}

