#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,real,img,x1,x2;
    printf("Enter the co efficients of the eqn : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0 && b==0)
    {
        printf("Invalid\n");
    }
    else
    d = (b*b)-(4*a*c);
    {
        if(d==0)
        {
            printf("It is real and equal\n");
            x1 = -b/(2*a);
            x2 = x1;
            printf("The roots are root 1 = %f and root 2 = %f",x1,x2);
        }
        else if(d>0)
        {
            printf("It is real and distinct");
            x1 = -b+(sqrt(d))/(2*a);
            x2 = -b-(sqrt(d))/(2*a);
        }
        else
        {
            printf("It is imaginary");
            real = -b/(2*a);
            img  = sqrt(fabs(d))/(2*a);
            printf("the roots are root 1 = %.3f+i%.3f ",real,img);
            printf("root 2 = %.3f-i%.3f",real,img);
        }
    }
}