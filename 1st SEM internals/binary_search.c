#include<stdio.h>
void main()
{
    int a[10],n,i,low,high,mid,found=0,key;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements in ascending order: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high && !found)
    {
        mid = (low+high)/2;
        if(a[mid]==key)
        {
            found=1;
        }
        else 
        {
            low = mid+1;
        }
    }
    if(found==1)
    {
        printf("Element found at %d",mid+1);
    }
    else
    {
        printf("Element not found");
    }
}