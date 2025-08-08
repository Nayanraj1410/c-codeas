#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D;
float x,y;
printf("enter the values of a:");
scanf("%f",&a);
printf("enter the values of b:");
scanf("%f",&b);
printf("enter the values of c:");
scanf("%f",&c);
D=b*b-(4*a*c);
if(D==0)
{
    printf("it has real and same roots \t");
    x=(-b+sqrt(D))/2*a;
    y=x;
    printf("%2f",x);
}
else if(D>0)
{
    printf("it has real and different roots");
    x=(-b+sqrt(D))/2*a;
    y=(-b-sqrt(D))/2*a;
    printf("x=%.0f \t y=%.0f",x,y);
}
else
{
    printf("it has no real roots");
}

return 0;
}