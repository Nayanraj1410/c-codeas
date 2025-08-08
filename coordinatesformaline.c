#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,m1,m2;
    printf("enter the coordinates x1:");
    scanf("%lf",&x1);
    printf("enter the coordinates x2:");
    scanf("%lf",&x2);
    printf("enter the coordinates x3:");
    scanf("%lf",&x3);
    printf("enter the coordinates y1:");
    scanf("%lf",&y1);
    printf("enter the coordinates y2:");
    scanf("%lf",&y2);
    printf("enter the coordinates y3:");
    scanf("%lf",&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2)
    {
        printf("ALL the points fall on the same line");
    }
    else
     printf("ALL the points not fall on the same line");

    return 0;

}