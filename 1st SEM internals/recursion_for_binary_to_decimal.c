#include<stdio.h>
int convert(int);
void main()
{
    int bin,dec;
    printf("\nEnter a binary number : ");
    scanf("%d",&bin);
    dec = convert(bin);
    printf("\nThe Decimal value of %d : %d",bin,dec);
}
int convert(int bin)
{
    if(bin==0)
    {
        return 0;
    }
    else
    {
        return(bin % 10 + 2 * convert(bin/10));
    }
}