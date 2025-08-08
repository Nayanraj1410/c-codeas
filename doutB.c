//  convert  to upper case 
#include<stdio.h>
int main()
{
    char str[]= "NaYaN";
    int i;
    //printf("Enter the string:");
    //scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=96&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    printf("Changed String:");
    printf("%s",str);
	return 0;
}
