#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][10];
    int i;
    for(i=0;i<3;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<3;i++)
    {
        if(strchr(s[i],'@')!=0)
        {
            printf("%s\n",s[i]);
        }
    }

}
