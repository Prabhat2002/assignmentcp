#include<stdio.h>
int sum(int x)
{
int ch[x];
printf("Enter series=");
for(int y=0;y<x;y++)
{
scanf("%d",&ch[y]);
}
int m=0,s=0;
for(int b=0;b<x;b=b+m)
{
s=s+ch[b];
m++;
}
return s;
}
int main()
{
int a;
printf("Enter how many number you want to enter=");
scanf("%d",&a);
int b=sum(a);
printf("%d",b);
}
