#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the values of x:");
    scanf("%f",&x);
    printf("Enter the values of y:");
    scanf("%f",&y);
    if(x>0&&y>0)
        printf("The values lies in first quadrants");
    else if(x<0&&y>0)
        printf("The values lies in second quadrants");
    else if(x<0&&y<0)
        printf("The values lies in Third quadrants");
    if(x>0&&y<0)
        printf("The values lies in Fourth quadrants");

    return 0;
}