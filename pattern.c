#include<stdio.h>
int main()
{
	int i,j,k=1,num=5;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
