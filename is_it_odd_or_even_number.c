#include <stdio.h>
void main()
{
    int a;
    printf("Enter to number to check if its even or odd : ");
    scanf("%d",&a);
    if(a%2 == 0)
    {
        printf("You have entered even  number");
    }
    else 
    {
        printf("You have entered odd number");
    }
}