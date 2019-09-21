#include<stdio.h>
void main()
{
	int a;
	printf("Enter number=");
	scanf("%d",&a);
	for(int q=1;q>=1;q++)
	{
		a=a/10;
		if((a>0)&&(a<10))
                break;
	}

        int b;
        printf("Enter number=");
        scanf("%d",&b);
        for(int r=1;r>=1;r++)
        {
                b=b/10;
                if((b>0)&&(b<10))
                break;
        }

	printf("%d",a*b);
}
