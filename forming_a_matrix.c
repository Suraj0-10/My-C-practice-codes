#include<stdio.h>
void main()
{
    int a[100][100],m,n,i,j;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the matrix a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The resultant matrix is : \n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }

}