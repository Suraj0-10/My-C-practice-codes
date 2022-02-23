#include<stdio.h>
void main()
{
    int a[200],n,i,key;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Enter the key element to be searched : ");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
            if(key == a[i])
            {
                printf("Element found at : %d\n",i+1);
            }
        }
        printf("wrong");
}