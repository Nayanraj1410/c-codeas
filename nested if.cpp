#include<stdio.h>
int main()
{
	int num,i;
	printf("enter the number : ");
	scanf("%d",&num);
	i=9;
	while(1)
	{
		printf("%d \t",i);
		if(i==num)
		   break;
		i=i+1;
	}
	/*if(num%5==0){
		if(num%3==0)
		   printf("%d is divisible by 5 and 3",num);
		else
		printf("%d is divisible by 5 but not 3",num);	
	}
	else{
		printf("%d is nither divisible by 3 nor 5",num);
	}*/
	return 0;
}
