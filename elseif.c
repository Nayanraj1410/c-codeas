#include<stdio.h>
int main()
{
    int n;
    printf("enter the percentage:");
    scanf("%d",&n);
    if(n>90&&n<100)
       printf("A grade");
    else if(n<90&&n>80)
        printf("B grade");
    else if(n>70&&n>50)
        printf("C grade");
    else if(n<50)
        printf("FAIL");

    return 0;
}