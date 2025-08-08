#include<stdio.h>
int main()
{
    float p,t,r,SI;
    printf("enter the principle value : ");
    scanf("%f",&p);
    printf("enter the rate: ");
    scanf("%f",&r);
    printf("enter the time : ");
    scanf("%f",&t);
    SI=(p*r*t)/100;
    printf("The simple intrest is: %.0f",SI);
    return 0;
}