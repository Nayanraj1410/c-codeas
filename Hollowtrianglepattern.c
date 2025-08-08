#include<stdio.h>
int main()
{
	int i=1,j=1,k=1,num=5;
	while(i<=num)
	{
		while(k<=num-i)
		{
			printf("  ");
			k++;
		}
		while(j<=i)
		{
			printf(" *");
			j++;
		}
	 i++;
	}
return 0;
}
