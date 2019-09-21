#include<stdio.h>
#include<math.h>
void main()
{
	int a,b;
	printf("Enter numbers=");
        scanf("%d %d",&a,&b);
	int m=pow(10,b-1);
        a=a/m;
	int q=a%10;
	printf("%d",q);
}
