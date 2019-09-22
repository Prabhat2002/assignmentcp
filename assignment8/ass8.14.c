#include<stdio.h>
void main()
{
int n;
printf("enter how many numbers you want to enter=");
scanf("%d",&n);
int ch[n];
int s=0;
printf("Enter series=");
for(int a=0;a<n;a++)
{
scanf("%d",&ch[a]);
int b=ch [a]/100;
int c=ch[a]%100;
int d=c/10;
int e=c%10;
if(d>e)
{
ch[a]=b*100+e*10+d;
}
else
{
ch[a]=b*100+d*10+e;
}
s=s+ch[a];
}
printf("%d",s);
}
