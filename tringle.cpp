#include<stdio.h>
int main()
{
	int i,j,num=20;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
		 if(i==j||j==1||i==20)
		 {
		   printf("* ");
		 }
		 else{
		 	printf("  ");
		 }
		}
	
		printf("\n");
	}
	return 0;
}
