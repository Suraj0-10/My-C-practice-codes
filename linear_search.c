#include<Stdio.h>
void main()
{
    int a[10],n,i,key,found=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element to be found : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at %d",i+1);
            found=1;
            break;
        }
    }
    if(found=0)
    {
        printf("Element not found");
    }

}