#include<stdio.h>
void main()
{
    int m,n,p,q,i,j,k,a[10][10],b[10][10],c[10][10]={0};
    printf("Enter the size of first matrix :\n");
    scanf("%d %d",&m,&n);
    printf("Enter the size of second matrix :\n");
    scanf("%d %d",&p,&q);
    printf("Enter the elements of 1st matrix : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix : ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("The resultant matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}