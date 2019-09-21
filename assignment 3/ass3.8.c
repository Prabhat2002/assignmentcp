#include<stdio.h>
void main()
{
int a,b,c;
printf("enter any three numbers\n");
scanf("%d,%d,%d",&a,&b,&c);
if(a==b)
{
printf("%d",c);
}
else if(a==c)
{
printf("%d",b);
}
else if(b==c)
{
printf("%d",a);
}
else
printf("no output");
}

