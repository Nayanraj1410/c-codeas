#include<stdio.h>
int main()
{
    char str[]="RaViKanT";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=96&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    printf("Changed String:");
    printf("%s",str);
    return 0;
}