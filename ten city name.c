#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][20],temp[20];
    int i,j;
    printf("Enter the citys name");
    for(i=0;i<5;i++)
    {
    gets(s[i]);
    }
    for(i=0;i<5;i++)
    {
      for(j=i+1;j<5;j++)
      {
           int  r=strcmp(s[i],s[j]);
           if(0<r)
           {
               strcpy(temp,s[i]);
               strcpy(s[i],s[j]);
               strcpy(s[j],temp);
           }

        }
    }
    printf("sort string\n");
    for(i=0;i<5;i++)

        printf("%s\n",s[i]);

    }

