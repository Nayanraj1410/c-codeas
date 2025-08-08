#include<stdio.h>
int main()
{
	int i,j,k,num=5;
	for(i=1;i<=num;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=num;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
