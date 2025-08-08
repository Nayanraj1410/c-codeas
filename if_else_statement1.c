#include <stdio.h>
int main()
{
    int x;
    printf("enter the value of x: ");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("x is a even number.");
    }
    else
    {
        printf("x is a odd number. ");
    }
    return 0;
}