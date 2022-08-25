#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][10]={"jitendra","MYsirG","pratrik"};
    int i,flag=0;
    for(i=0;i<3;i++)
    {
        if(strcmp(s[i],"MYs")==0)
        {
            flag=1;
        }
    }
    if(flag==1)
        printf("This string is found");
    else
        printf("This is string not found");
}
