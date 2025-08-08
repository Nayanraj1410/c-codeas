//hcf of two no. using recursion
#include<stdio.h>
hcf(int a, int b)
{
    if(b==0)
    {
    return a;
    }
    else{
        return hcf (b, a%b);
    }
}
int main()
{
    int num1,num2,result;
    printf("Enter first no.");
    scanf("%d",&num1);
    printf("Enter second no.");
    scanf("%d",&num2);
    result=hcf(num1,num2);
    printf("hcf of %d and %d is :%d",num1,num2,result);
    return 0;
}