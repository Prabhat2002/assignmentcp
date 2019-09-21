#include<stdio.h>
#include<math.h>
void main()
{
	 float a,b,c;
        printf("Enter 1st vector=");
        scanf("%f %f %f",&a,&b,&c);
	float t=a*a+b*b+c*c;
        float r=sqrt(t);
       	printf("%0.1fi+%0.1fj+%0.1fk\n",a/r,b/r,c/r);
}

