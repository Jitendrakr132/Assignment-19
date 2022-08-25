#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char a[3][2][20]={{"prateek","123"},{"MysirG","456"},{"aditya","321"}};
    char username[]="prateek";
    char password[]="125";
    for(i=0;i<3;i++)
    {
        if((strcmp(username,a[i][0])==0)&&(strcmp(password,a[i][1])==0))
        {
            printf("login successful!!!");
            flag=1;
        }
    }
    if(flag==0)
        printf("Username or password not matched");
    return 0;
}
