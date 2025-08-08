#include<stdio.h>
void getvalue(int*a)
{
   printf(" enter the value :");
   scanf("%d",a);
}
int power(int x, int y)
{
   if(y==0)// BASE VALUE
       return 1;
    else
        return x*power(x,y-1);
}
int main()
{
    int a, pow;
    getvalue(&a);
    getvalue(&pow);
    printf("pow of%d: %d", a,power (a,pow));

    return 0;
}

