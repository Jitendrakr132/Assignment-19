#include<stdio.h>
#include<string.h>
int main()
{
    char ip[]={"23.123.35.12"};
    char *p=strtok(ip,".");
    while(p!=NULL)
    {
        int x=atoi(p);
        if((x>=0)&&(x<=255))
            printf("%d ",x);
        p=strtok(NULL,".");
    }
}
