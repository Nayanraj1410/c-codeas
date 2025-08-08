// finding cube using function.
#include<stdio.h>
void getvalue(int *a)
{
    printf("enter the value: ");
    scanf("%d", a);
}
int cube(int x)
{
   return x*x*x*x;
}
int main()
{
    int a;
    getvalue(&a);
   // printf( "%d",a);
    printf(" cube of %d: %d\n",a, cube(a));

    return 0;
}