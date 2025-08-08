#include<stdio.h>
int main()
{

    int mat[3][3],i,j,sum=0;
    printf("enter the element of matrix : \n");
    for ( i=0; i<3; i++)
    {
        for (j=0; j<3;j++)
        {
            scanf("%d",&mat[i][j] );
        }
        printf("\n");
    }

printf("entered matrix: \n");
for (int i=0; i<3; i++)
    {
        for (int j=0; j<3;j++)
        {
            printf("%d\t",mat[i][j] );
        }
        printf("\n");
    }
    printf("calculating....\n");
    for (int i=0; i<3; i++)
    {
    
        for (int j=0; j<3;j++)
        {
            if(i==j)
            {
                printf("%d\t",mat[i][j]);
               sum+=mat[i][j];
            
            }     
           else if(i+j==2)
            {
                printf("%d\t",mat[i][j]);
                sum+=mat[i][j];
            }            
           else
            {
                printf("_\t");
            
            }            
        }
        printf("\n");
    }
    printf("sum is %d",sum);
return 0;
}
