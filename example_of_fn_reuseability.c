#include<stdio.h>
int areaofsq(int a)
{
    int area;
    area = a*a;
    return area;
}
void main()
{
    int a,area,num,sqr;
    printf("Enter the side of the square : ");
    scanf("%d",&a);
    area = areaofsq(a);
    printf("%d\n",area);
    printf("Enter a number to get's its square : ");
    scanf("%d",&num);
    sqr = areaofsq(num);
    printf("%d",sqr);
}