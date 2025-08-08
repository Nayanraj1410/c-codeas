#include<stdio.h>
int main()
{
    int marks[2][2][2];
    int i,j;
    marks[0][0][0]=10;
    marks[0][0][1]=20;
    marks[0][1][0]=30;
    marks[0][1][1]=40;
    marks[1][0][0]=50;
    marks[1][0][1]=60;
    marks[1][1][0]=70;
    marks[1][1][1]=80;
    
    
    // for ( int i=0;i<3; i++)
    // {
    //    for (int j=0; j<3;j++)
    //     {
    //        scanf("%d\t",marks[i][j]);
    //     }
    // }
    for ( i=0;i<2; i++)
    {
       for ( j=0; j<2;j++)
        {
         for (int k=0; k<2; k++)
         {
              printf("%d\t",marks[i][j][k]);
         }

        }
        
    }
    return 0;
}
