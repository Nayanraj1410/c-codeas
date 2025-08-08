#include<stdio.h>
#include<math.h>
int main()
{
    int a,sum=0;
    printf("enter a number:");
    scanf("%d",&a);
    for(int i=1; i<=a;i++)
    {
       sum+=(i*i);
      
    }
    printf("%d",sum);
}