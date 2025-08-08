#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nafter swapping a:%d and b:%d",x,y);
}
int main()
{
    int a ,b;
    printf("enter the values:");
    scanf("%d %d",&a,&b);
    printf("before swapping a:%d and b:%d\n",a,b);
    swap(a,b);
    return 0;
}