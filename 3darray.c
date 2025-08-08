#include<stdio.h>
int main()
{
	int arr[3][3],i,j,num;
	printf("enter data elements\n");
	
	for(i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("arr[%d][%d]:",i,j);
				scanf("%d",&arr[i][j]);
			
		}
	}

	printf("entered matrix : \n");
	for(i=0;i<4;i++)
	{
	
		for (j=0;j<4;j++)
		{
			if(i==j||arr[i][j]==arr[0][2]||arr[i][j]==arr[2][0])
			{
				printf("%d",arr[i][j]);	
			}
			else{
				printf(" ");
			}
			
				
		}
	 printf("\n");
	}
	getch();
	return 0;
	}
  
