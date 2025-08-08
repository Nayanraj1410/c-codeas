#include<stdio.h>
void add()
{
    int a,b;
    printf("enter the value: ");
    scanf("%d %d",&a,&b);
    printf("the sum value is : %d\n",a+b);
}
void mul()
{
    int a,b;
    printf("enter the value: ");
    scanf("%d %d",&a,&b);
    printf("the mul value is : %d\n",a*b);

}
int main()
{
    add();
    mul();
    add();
    mul();
    return 0;
}
