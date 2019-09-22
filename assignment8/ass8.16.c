#include<stdio.h>
void main()
{
int n;
printf("enter upto which no you want to find the sum of all odd numbers=");
scanf("%d",&n);
int p=0;
for(int a=1;a<=n;a=a+2)
{
p=p+a;
}
printf("sum=%d",p);
}
