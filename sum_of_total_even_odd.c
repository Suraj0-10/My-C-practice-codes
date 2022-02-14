#include<stdio.h>
void main()
{
    int num,i,even=0,odd=0;
    printf("Enter the number upto where you want to find sum of odd/even no.s = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
    }
    printf("Sum  of all even nums = %d\t",even);
    printf("Sum of all odd nums = %d\t",odd);
}