#include<stdio.h>
#include<string.h>
int main()
{
    char s[2][10];
    char s1[20];
    int i,j,l,flag=0;
    l=strlen(s1);
    printf("Enter the strings:");
    for(i=0;i<2;i++)
    {
        gets(s[i]);
    }
  for(i=0;s1[i];i++)
  {
    if(s1[i]!=s1[l-1-i])
        {
        flag=1;
        }

    }
    if(flag!=1)
    {
        for(i=0;i<2;i++)
        {
            if(strcmp(s[i],s1[i])==0)
            printf("%s",s[i]);

    }
}
}

