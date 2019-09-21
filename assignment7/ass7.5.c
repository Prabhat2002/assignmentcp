#include<stdio.h>
void main()
{
        float a,b,c;
	printf("Enter 1st vector=");
	scanf("%f %f %f",&a,&b,&c);
	printf("%fi+%fj+%fk\n",a,b,c);

        float p,q,r;
	printf("Enter 2nd vector=");
	scanf("%f %f %f",&p,&q,&r);
	 printf("%fi+%fj+%fk\n",p,q,r);

	printf("%0.1f",p*a+q*b+r*c);
	

}


