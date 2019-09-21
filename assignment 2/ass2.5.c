#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e;
float f;
printf("enter the co-ordinates a,b\t\n");
scanf("%d,%d",&a,&b);
printf("enter co-efficients of line equation c,d,e\t\n");
scanf("%d,%d,%d",&c,&d,&e);
f=(a*c+b*d+e)/sqrt(c*c+d*d);
printf("distance of point from line is%f",f);
}
