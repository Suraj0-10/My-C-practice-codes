#include <stdio.h>
void main() 
{
  int a[100][100],b[100][100],sum[100][100],r,c,i,j;
  printf("Enter the number of rows : ");
  scanf("%d",&r);
  printf("Enter the number of columns : ");
  scanf("%d",&c);

  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    printf("Enter the elements for 1st matrix a%d%d :\n",i+1,j+1);
    scanf("%d",&a[i][j]);
    }
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    printf("Enter the elements for 2nd matrix b%d%d : \n",i+1,j+1);
    scanf("%d",&b[i][j]);
    }
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    sum[i][j] = a[i][j] + b[i][j];
    }
  
  printf("The result sum matrix is :\n");
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    printf("%d  ",sum[i][j]);
    if(j == c-1)
    {
      printf("\n\n");
    }
    }
}