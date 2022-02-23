#include<stdio.h>
void main()
{
    int a[100],i,nums,n,sum=0;
    float avg;
    printf("Enter the number of elements to be entered : ");
    scanf("%d",&n);
    printf("Enter the numbers to find it's mean : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums);
        sum = sum + nums;
    }
    avg = sum/n;
    printf("The mean of the following numbers are :%f",avg);
}