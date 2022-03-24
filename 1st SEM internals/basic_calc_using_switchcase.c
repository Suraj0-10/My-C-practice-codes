#include<stdio.h>
void main()
{
    int a, b;
    char op;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the operator(-,*,+,/) : ");
    scanf(" %c",&op);
    switch(op)
    {
        case '-' : printf("%d - %d = %d",a,b,a-b);
        break;
        case '+' : printf("%d + %d = %d",a,b,a+b);
        break;
        case '*' : printf("%d x %d = %d",a,b,a*b);
        break;
        case '/' : printf("%d / %d = %d",a,b,a/b);
        break;
        default : printf("invalid");
    }
} 