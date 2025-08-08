#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,q;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a number power:");
    scanf("%d",&b);
    q=pow(a,b);
    printf("%d",q);
    return 0;
}