//range of number to be perfect
#include<stdio.h>
get_value(int *n,int *l)
{
    printf("enter start number:");
    scanf("%d",n);
    printf("enter end number:");
    scanf("%d",l);
}
int main()
{
    int sum=0,i,num,last;
    get_value(&num,&last);
    while(num<=last)
    {
     sum=0;
     for(i=1;i<num;i++)
     {
        if(num%i==0)
        {
            sum+=i;
        }
     }
     if(num==sum)
     {
        printf("%d is a perfect number\n ",num);
     }
     else{
        printf("%d is not a perfect number\n",num);
     }
     num++;
}
    return 0;
}


