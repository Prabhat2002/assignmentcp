#include<stdio.h>
void main()
{
for(int a=0;a<=100;a+=2)
{
if((a%3==0)||(a%5==0))
{
printf("\n");
}
else
{
printf("%d\n",a);
}
}
}
