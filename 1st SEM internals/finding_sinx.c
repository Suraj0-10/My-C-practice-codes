#include<stdio.h>
#include<math.h>

int  main()
{
	int  i;
	float x, t, sum=0;
	printf("Enter value of degree \n");
	scanf("%d",&x);
	x=x*(3.1415/180);
	t=x;
           sum=x;
 	for(i=1; i<=n; i++)
	{    t=(t*(-1)*x*x ) / (2*i*(2*i+1));
      		sum=sum+t;
	}
	printf(“The  value of sine(%f)=%f\n”,x,sum);
	printf(“Using library function=%f”, sin(x));
}
