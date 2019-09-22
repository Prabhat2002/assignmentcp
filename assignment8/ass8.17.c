#include<stdio.h>
void main()
{
int a;
printf("Enter how many number you want to enter=");
scanf("%d",&a);
int ch[a];
printf("Enter series=");
for(int y=0;y<a;y++)
{
scanf("%d",&ch[y]);
}
int q=0;
int n=0,m=1,p;
while(n<a-1)
{
     p=1;
for(int b=n;b<=m;b++)
{
p=p*ch[b];
}
q=q+p;
n++;
m++;
}
printf("%d",q);
}
