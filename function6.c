// checking wether the no. is armstrong no.
#include<stdio.h>
void getvalue(int*num)
{
   printf(" enter the value of num:",num);
   scanf("%d",num);
}
int armstrong(int x)
{
 //for 3 digit no only
 int sum=0,rem, temp;
 temp=x;
 while(temp>0)
 {
    rem=temp%100;
    sum+=(rem*rem*rem*rem);
    temp=temp/100;
 }
 if(sum==x)
     return 1;
 else
     return 0;

}
int main()
{
    int a;
    getvalue(&a);
    armstrong(a)?printf("armstrong number"):printf(" not armstrong number");
    return 0;
}