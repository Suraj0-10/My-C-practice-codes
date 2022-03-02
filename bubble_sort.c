#include<stdio.h>
void main()
{
    int a[100],i,j,n,temp;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[i]>a[i]+1)
            {
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}