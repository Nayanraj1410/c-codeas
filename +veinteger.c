#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", n);
    if (n % 5 == 0 && n % 3 == 0)
    {
        printf("The given number is divisible by 5,3,");
    }
    else
    {
        printf("It is not divisible by 5,3");
    }
    return 0;
}