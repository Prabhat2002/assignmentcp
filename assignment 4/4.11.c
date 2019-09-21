#include<stdio.h>
int main()
{
for(int a=1;a<=100;a++)
{
int b=a/10;
int c=a%10;
if((b+c)%7==0)
{
printf("%d\n",a);
}
else
{
continue;
}
}
}
