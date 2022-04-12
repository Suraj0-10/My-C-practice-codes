#include<stdio.h>
#include<string.h>
void concat(char[],char[]);
void len(char[]);
void compare(char[],char[]);
void main()
{
  char s1[20],s2[20];
  printf("\nEnter the string 1 : ");
  gets(s1);
  len(s1);
  printf("\nEnter the string 2 : ");
  gets(s2);
  len(s2);
  concat(s1,s2);
  printf("The concatenated string is %s\n",s1);
  compare(s1,s2);
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
void len(char s1[])
{
  int i,length=0;
  for(i=0;s1[i]!='\0';i++)
  {
    length++;
  }
  printf("The length of the string is %d\n",length);
}
void compare(char s1[],char s2[])
{
  int i;
  for(i=0;s1[i]==s2[i] && s1[i]=='\0';i++);
  if(s1[i]>s2[i] || s1[i]<s2[i])
  {
    printf("Both strings are not equal\n");
  }
  else if(s1[i]==s2[i])
  {
    printf("Both strings are equal\n");
  }
}
