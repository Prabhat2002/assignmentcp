#include<stdio.h>
int main()
{
for(int a=1;a<=100;a++)
{
int b=a/10;
if(b%3==1)
printf("%d\n",a);
else
continue;
}
}
