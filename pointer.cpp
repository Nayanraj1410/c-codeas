#include<stdio.h>
int main()
{
	short int a=-128;
	//printf("%d",sizeof(a));
	
	char*ptr= (float*)&a;
	printf("%d",*ptr);
}
