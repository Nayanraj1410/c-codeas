#include <stdio.h>
int main()
{
    float x;
    printf("Enter the value of x:");
    scanf("%f", &x);
    int y = x;
    printf("%d\n", y);
    float z= x - y;
    printf("%f\n", z);

    return 0;
}
/*#include<stdio.h>
int main()
{
    float x=5.685;
   // scanf("%f",&x);
    int y=x;
    printf("%d\n",y);
    float z=x-y;
    printf("%f\n",z);  // Corrected from &z to z

    return 0;
}
*/
