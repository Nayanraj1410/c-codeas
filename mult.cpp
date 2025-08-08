#include<stdio.h>
int main()
{
	int i,m;
	printf("Enter the Number =");
	scanf("%d",&i);
	m=10;
	/*while(m<=10)
	{
		printf("%d*%2d=%3d \n",i,m,i*m);
		m++;
	}*/
	do{
		printf("%d*%2d=%3d \n",i,m,i*m);
		m--;
	}
	while(m>=1);
	return 0;


}
