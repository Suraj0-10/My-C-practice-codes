#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("Enter the number which you want to print till 1-n : ");
    scanf("%d",&n);
    printf("The values you entered are :\n");
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
        printf("%d\n",a[i]);
    }
}