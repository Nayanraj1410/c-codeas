#include<stdio.h>
int main()
{
    int num,i,flag=0,end;
    printf("enter the number=");
    scanf("%d",&num);
    printf("End num=");
    scanf("%d",&end);
    while(num<=end)
    {
        flag=0;
     i=2;
      while(i<=num/2)
     {
        if(num%i==0)
        flag=1;
        i++;
     }
    if(flag==0)
    printf("%d is a prime number\n",num);
    else
    printf("%d is a composite number\n",num);
    num++;
    }
    return 0;
}