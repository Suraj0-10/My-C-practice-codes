#include<stdio.h>
#include<string.h>
void main()
{
    char name[100],lang[100];
    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your coding language : ");
    scanf("%s",lang);
    if(strcmp(lang,"python")==0)
    {
        printf("hi %s you are like me who likes %s",name,lang);
    }
    else 
    {
        printf("Ohh %s you like %s than python huh?",name,lang);
    }
}