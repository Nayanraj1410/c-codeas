#include<stdio.h>
int main()
{
	int arr[3][3],arr1[3][3],i,j,res;
	printf("enter data elements\n");
	
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("arr[%d][%d]:",i,j);
				scanf("%d",&arr[i][j]);
			
		}
	}

	printf("entered matrix 1: \n");
	for(i=0;i<3;i++)
	{
	
		for (j=0;j<3;j++)
		{
			if(i==j||arr[i][j]==arr[0][2]||arr[i][j]==arr[2][0])
			{
				printf("%d ",arr[i][j]);	
			}
			else{
				printf(" ");
			}
			
				
		}
		
	 printf("\n");
	}
	printf("enter data elements\n");
	
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("arr[%d][%d]:",i,j);
				scanf("%d",&arr1[i][j]);
			
		}
	}
	
	printf("entered matrix 2 : \n");
	for(i=0;i<3;i++)
	{
	
		for (j=0;j<3;j++)
		{
			if(i==j||arr1[i][j]==arr1[0][2]||arr1[i][j]==arr1[2][0])
			{
				printf("%d ",arr1[i][j]);	
			}
			else{
				printf(" ");
			}
			
				
		}
		
	 printf("\n");
	}
	printf("resultant matxrix : \n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		(arr[i][j])=arr[i][j]+arr1[i][j];
	    }
	
	}
	printf
	return 0;
}	
  
