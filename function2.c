#include<stdio.h>
//CASE 1: output= it will give declaration error
int main()
{
    foo();
    return 0;
}
void foo()
{
    printf("from foo \n");
}
//default return type of a function is integer(int)
// CASE 2 : output without having error or warning= from foo
#include<stdio.h>
void foo();//forward declaration
int main()
{
    foo();
    return 0;
}
void foo()
{
    printf("from foo \n");
}