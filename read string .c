#include<stdio.h>
#include<string.h>
int main()
{
    char s[2][10],i;
    printf("Enter the string ");
    for(i=0;i<2;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<2;i++)
        printf("%s\n",s[i]);
}
