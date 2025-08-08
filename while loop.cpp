#include <stdio.h>
int main()
{
	int strt,end,i,j,flag=0;
	printf("enter starting position: ");
	scanf("%d",&strt);
	printf("/n enter end position: ");
	scanf("%d",&end);
	i=strt;
	while(i<=end)
	{
		j=2;
		while(j<i/2)
		{
			if(i%j==0)
			{
			flag=1;
			}
			j=j+1;
		}
		if(flag==0)
		{
			printf("%d is a prime no \n",i);
		}
		else{
			printf("%d is not a prime no \n",i);
		}
		i=i+1;
		flag=0;
	}
	return 0;
}