#include<stdio.h>
int main()
{
    float a,b,c,d;
    float avg;
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    printf("enter the number:");
    scanf("%f",&c);
    printf("enter the number:");
    scanf("%f",&d);
    avg=(a+b+c+d)/4;
    printf("the average is %f",avg);
    return 0;
}