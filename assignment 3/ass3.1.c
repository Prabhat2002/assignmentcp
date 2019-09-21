#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three numbers\n");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)
{
printf("greatest no. is %d",a);
}
else if(b>c)
{
printf("greatest no. is %d",b);
}
else
printf("greatest no. is %d",c);
}
