//recursion
//perfect no
#include<stdio.h>
void getvalue(int*a)
{
   printf(" enter the value :");
   scanf("%d",a);
}
int factorial(int x)
{
   if(x==1)// BASE VALUE
       return 1;
    else
        return x*factorial(x-1);
}
int main()
{
    int a;
    getvalue(&a);
    printf("factorial of %d: %d\n",a, factorial(a));
    return 0;
}

