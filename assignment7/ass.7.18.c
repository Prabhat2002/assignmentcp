#include<stdio.h>
#include<math.h>
void main()
{
        int n;
        printf("Enter dimension=");
        scanf("%d",&n);
        float ch[n];
        printf("Enter entries=");
        for(int a=0;a<n;a++)
        {
                scanf("%f",&ch[a]);
        }
        float p=0;
         for(int c=0;c<n;c++)
        {
              p=p+ch[c]*ch[c];
        }
	 float  q=sqrt(p);
         printf("\n modulus=%f",q);
}


