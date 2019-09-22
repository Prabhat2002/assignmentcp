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
int p=0,n;
for(int b=0;b<a;b++)
{
if(ch[b]%2==0)
p++;
n=b;
if(p==4)
break;
}
int q=0;
for(int c=n+1;c<a;c++)
{
q=q+ch[c];
}
printf("%d",q);
}
