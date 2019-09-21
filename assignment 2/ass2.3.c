#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("Enter all three cordinates of Tringle");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	float A;
	A=0.5*(a*(d-f)+c*(f-b)+e*(b-d));
	printf("%f",A);
}

