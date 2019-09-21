#include<stdio.h>
int main()
{
for(int a=1;a<=100;a++)
{
if((a/10)%2==1)
printf("%d\n",a);
else
continue;
}
}
