#include<stdio.h>
void main()
{
int a,b,c,d,x;
printf("enter the values a,b,c,d,x");
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&x);
if(a==x)
printf("x is equal to a");
else if(b==x)
printf("x is equal to b");
else if(c==x)
printf("x is equal to c");
else if(d==x)
printf("x is equal to d");
else
printf("x is equal to none");
}
