#include<stdio.h>
void main()
{
    int ar1[100],ar2[100],ar3[100],i,n;
    printf("Enter the Number of elements you want  to enter : ");
    scanf("%d",&n);
    printf("Enter %d elements for array 1 : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar1[i]);
    }
    printf("Enter %d elements for array 2 : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar2[i]);
    }
    printf("Sum of the array : ");
    for(i=0;i<n;i++)
    {
        ar3[i]=ar1[i]+ar2[i];
        printf("%d\t",ar3[i]);
    }
}