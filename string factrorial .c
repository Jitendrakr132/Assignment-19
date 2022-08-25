#include<stdio.h>
#include<string.h>
void fact(int );
int main()
{
    char username[4][20]={"jitendra","jitu","deepak","MysirG"};
    char word[]="jitendra";
    int i,l,flag=0;
    l=strlen(word);
    void fact()
    {
        int i=1,f=1;
        while(i<=l)
        {
            f=f*i;
            i++;
        }
        printf("factrorial %d",f);
    }
    for(i=0;i<4;i++)
    {
        if(strcmp(username[i],word)==0)
           flag=1;
    }
    if(flag==1)
        fact();
}
