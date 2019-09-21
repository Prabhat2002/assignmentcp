#include<stdio.h>
int main()
{
int b;
for(int a=1;a<=100;a++)
{
b=a%10;
if(b%3==0)
{
printf("%d\n",a);
}
else
{
continue;
}
}
}

