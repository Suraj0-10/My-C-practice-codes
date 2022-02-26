#include<stdio.h>
void main()
{
    int num,rem;
    int rep[10]={0};
    printf("Enter your number : ");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num % 10;
        if(rep[rem]==1)
        break;
        rep[rem]=1;
        num = num/10;
    }
    if(num>0)
    {
    printf("yes there is a number repeated");
    }
    else 
    {
    printf("No there ain't any number repeated");
    }
}
