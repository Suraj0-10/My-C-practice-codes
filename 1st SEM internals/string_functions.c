#include<stdio.h>
#include<string.h>
void concat(char[],char[]);
void length(char[]);
void compare(char[],char[]);
int main()
{
    char s1[20],s2[20];
    printf("\nEnter the string 1 : ");
    gets(s1);
    length(s1);
    printf("\nEnter the string 2 : ");
    gets(s2);
    length(s2);
    concat(s1,s2);
    printf("\nThe concatenated string is : %s\n",s1);
    compare(s1,s2);
    return 0;
}
void concat(char s1[],char s2[])
{
    int i,j;
    i=strlen(s1);
    for(j=0;s2[j]!='\0';i++,j++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';
}
void length(char s1[])
{
    int i,length=0;
    for(i=0;s1[i]!='\0';i++)
    {
        length++;
    }
    printf("The length of string is : %d\n",length);
}
void compare(char s1[],char s2[])
{
    int i,len1,len2;
    len1=length(s1);
    len2=length(s2);
    if(len1!=len2)
    {
        return 1;
    }
    else
    {
        for(i=0;s1[i]!='\0';i++)
        {
            if(s1[i]!=s2[i])
            return 1;
        }
    }
}