#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][10];
    int i,j,vowel;
    printf("Enter the strings:");
    for(i=0;i<3;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;s[i][j]!='\0';j++)
        {
            if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u')
         vowel++;
        }
        printf("%s ==> %d\n",s[i],vowel);
        vowel=0;
    }
    return 0;
}
