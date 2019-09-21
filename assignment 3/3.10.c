#include<stdio.h>
void main()
{
int a,b,c,d;
int x;
printf("enter values of a,b,c,d,x\n");
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&x);
if(x==a||x==b||x==c||x==d)
{
printf("1");
}
else if((x==a&&x==b&&x==c)||(x==a&&x==b&&x==d)||(x==b&&x==c&&x==d))
{
printf("3");
}
else
printf("0");
}
