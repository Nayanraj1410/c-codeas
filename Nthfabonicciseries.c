#include<stdio.h>
int main()
{
	int a,b,res,i=3,x;
	a=1;
	b=1;
	printf("The number of term : ");
	scanf("%d",&x);
	while(i<=x)
	{
		res=a+b;
		a=b;
		b=res;
		i++;
	}
	printf("The %d term of fabbannaci series is %d",i,res);
	return 0;
}

// #include<stdio.h>
// int main()
// {
// int n;
// printf("enter value of n:");
// scanf("%d",&n);
// int a=1;
// int b=1;
// int sum=1;
// for(int i=1;i<=n-2;i++);
// {
// 	sum=a+b;
// 	a=b;
// 	b=sum;
// }
// printf("the %dth fabonici is :%d",n,sum);
// return 0;
// }