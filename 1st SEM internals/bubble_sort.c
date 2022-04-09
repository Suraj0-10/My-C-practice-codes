#include<stdio.h>
void main()
{
    int n,i,j,a[100],temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }   
}