#include<stdio.h>
void function()
{
    printf("from function of no return type no argument \n");

}
void function2(int a,int b)
{
    printf("function of no returntype with argument value of a:%d\n value of b:%d\n",a,b);
}
int function3()
{
    printf("from function of int with return with no argument \n");
    return 10;
}
float function4(int a, float f)
{
    float res;
    printf(" function of float return with no argument \n");
    res= a+f;
    return res;
}
int main ()
{
    int a; float b;
    function();
    function2(10,20);
    a=function3();
    b=function4(10,50.5);
    printf("value of a:%d \n",a);
    printf(" value of b:%f \n",b);
    return 0;
}
