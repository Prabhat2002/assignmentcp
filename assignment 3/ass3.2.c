#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter any four numbers\n");
scanf("%d,%d,%d,%d",&a,&b,&c,&d);
if(a>b)
{
printf("greatest number is %d",a);
}
else if(b>c)
{
printf("greatest number is %d",b);
}
else if(c>d)
{
printf("greatest number is %d",c);
}
else
printf("greatest number is %d",d);
} 
