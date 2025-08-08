#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter a number a:");
    scanf("%d",&a);
    printf("enter a number b:");
    scanf("%d",&b);
    printf("enter a number c:");
    scanf("%d",&c);
    printf("enter a number d:");
    scanf("%d",&d);
    if(a>b&&a>c&&a>d)
    {
        printf("a is greater");
    }
    if(b>a&&d>c&&b>d)
    {
        printf("b is greater");
    }
    if(c>b&&c>d&&c>a)
    {
        printf("c is greater");
    }
    if(d>a&&d>b&&d>c)
    {
        printf("d is greater");
    }
    return 0;
}