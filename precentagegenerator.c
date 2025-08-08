#include<stdio.h>
int main()
{
    int x1,x2,x3,x4,x5;
    printf("enter the marks of x1: ");
    scanf("%d",&x1);
    printf("enter the marks of x2: ");
    scanf("%d",&x2);
    printf("enter the marks of x3: ");
    scanf("%d",&x3);
    printf("enter the marks of x4: ");
    scanf("%d",&x4);
    printf("enter the marks of x5: ");
    scanf("%d",&x5);
     float x=((x1+x2+x3+x4+x5)*100)/500;
    printf("the percentage is: %f%% ",x);

    return 0;

}