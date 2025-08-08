#include<stdio.h>
int main()
{
    int marks[3][3];
    int i,j;
    marks[0][0]=10;
    marks[0][1]=20;
    marks[0][2]=30;
    marks[1][0]=40;
    marks[1][1]=50;
    marks[1][2]=60;
    marks[2][0]=70;
    marks[2][1]=80;
    marks[2][2]=90;
    // for ( int i=0;i<3; i++)
    // {
    //    for (int j=0; j<3;j++)
    //     {
    //        scanf("%d\t",marks[i][j]);
    //     }
    // }
    for ( i=0;i<3; i++)
    {
       for ( j=0; j<3;j++)
        {
           printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
