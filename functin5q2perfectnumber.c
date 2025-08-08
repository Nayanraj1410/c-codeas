#include<stdio.h>
void getvalue(int*num)
{
   printf(" enter the value of num:",num);
   scanf("%d",num);
}
int main()
{
    int num,i,sum=0;
    getvalue(&num);
    while(num<=1000)
    {sum=0;
      for(i=1;i<num;i++)
     {
        if (num%i==0)
        {
            sum+=i;
        }
     }
      if (sum==num)
     {
        printf(" %d is a perfect number \n", num);
     }
     else
        {
            printf("%d is not a perfect number \n",num);
        }
     num++;
    }    
    return 0;
}