// finding values using power in function
#include<stdio.h>
void getres(int *a)
{
    printf("enter the value: ");
    scanf("%d", a);
}
int cube(int x)
{
   return x*x*x*x*x;
}
int main()
{
    int a;
    getres(&a);
   // printf( "%d",a);
    printf(" fifth power of %d is : %d\n",a, cube(a));

    return 0;
}
