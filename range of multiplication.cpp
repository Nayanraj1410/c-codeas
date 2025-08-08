#include<stdio.h>
int main()
{
	int i,z,m=1;
	printf("Start number =");
	scanf("%d",&i);
	printf("End number =");
	scanf("%d",&z);
	while(i<=z){
		for(m=1;m<=10;m++)
		printf("%2d*%d=%2d \n",i,m,i*m);
	 i++;
	}
	return 0;
}
