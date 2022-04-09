#include<stdio.h>
struct student
{
    char usn[50];
    char name[50];
    int marks;   
}s[10];
void main()
{
    int i,n,countav=0,countbv=0;
    float average,sum;
    printf("\nEnter the number of students : ");
    scanf("%d",&n);
    printf("\nEnter the student information\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the USN : ");
        scanf("%s",s[i].usn);
        printf("Enter student name : ");
        scanf("%s",s[i].name);
        printf("Enter Marks : ");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+s[i].marks;
    }
    average = sum/n;
    for(i=0;i<n;i++)
    {
        if(s[i].marks>=average)
        {
            countav++;
        }
        else
        {
            countbv++;
        }
    }
    printf("Above average students are : %d\n",countav);
    printf("Below average students are : %d\n",countbv);
}