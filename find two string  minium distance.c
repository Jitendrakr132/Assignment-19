#include<stdio.h>
#include<string.h>
int main()
{
    char words[6][20]={"My","name","is","jitendra","and","jittu"};
    char word1[]="My";
    char word2[]="jittu";
    int i,w1=-1,w2=-1,min=10000,temp;
    for(i=0;i<6;i++)
    {
        if(strcmp(words[i],word1)==0)
            w1=i;
        if(strcmp(words[i],word2)==0)
            w2=i;
        if(w1!=-1&&w2!=-1)
        {
            temp=abs(w2-w1);
            if(temp<min)
                min=temp;
        }
    }
    printf("%d",min-1);
    return 0;
}
