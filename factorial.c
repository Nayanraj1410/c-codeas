#include<stdio.h>
int main()
{
    int n,product=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        product=product*i;
    }
    printf("%d is the factorial of %d.",product,n);
    return 0;
}