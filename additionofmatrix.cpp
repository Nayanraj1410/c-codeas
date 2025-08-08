#include<stdio.h>
int main()
{
    int arr[3][3],arr1[3][3],res[3][3],i,j, num;

    printf("enter the elements of array 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the elements of array 2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Entered Matrix 1:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            printf("%d\t",arr[i][j]);
       }
       printf("\n");
    }
   printf("Entered Matrix 2:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            printf("%d\t",arr1[i][j]);
       }
       printf("\n");
    }
    printf("\nCalculating Summation...\n");
      for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           res[i][j]=arr[i][j]+arr1[i][j]; 
       }
    }
    printf("Resultant Matrix:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            printf("%d\t",res[i][j]);
       }
       printf("\n");
    }
}
