#include<stdio.h>
void add();
void multi();
void main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("Enter two numbers to add : ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("The addition : %d\n",c);
    multi();
}
void multi()
{
    int x,y,z;
    printf("Enter two numbers to multiply : ");
    scanf("%d %d",&x,&y);
    z=x*y;
    printf("The multiplication :%d\n",z);
}


