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
        float x,y,z;
         x=b*r-c*b;
         y=a*r-p*c;
         z=a*q-b*p;
        printf("%f %f %f",x,y,z);
}	

