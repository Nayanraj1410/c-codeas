#include<stdio.h>
int main()
{
    int n,a,arm=0,r;
    printf("enter the number");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(a==arm)
    {
        printf("%d is armstrong number",a);
    }
    else
    {
        printf("%d is not a armstrong number",a);
    }
    return 0;
}