 #include<stdio.h>
void foo()//forward declaration
{
    printf(" from foo \n");
}
int main ()
{
    
    foo();
   
    return 0;
}