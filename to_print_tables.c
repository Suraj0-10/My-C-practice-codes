#include<stdio.h>
int main()
{
    int a,i,ml;
    printf("Enter the number to make table : \n");
    scanf("%d",&a);
    printf("the tables you've entered are :\n");
    for(i=1;i<=10;i++)
    {
        ml=a*i;
        printf("%d x %d = %d\n",a,i,ml);
    }
    return 0;
}