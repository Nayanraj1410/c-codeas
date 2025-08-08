#include<stdio.h>
int main()
{
    int matrix[3][3]; 
   for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            //matrix[i][j]=i*j;
            printf("enter the elements[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}