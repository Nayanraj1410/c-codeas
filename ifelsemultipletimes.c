#include<stdio.h>
int main()
{
	int age;
	printf("Enter the Age =");
	scanf("%d",&age);
	if(age>0&&age<=18){
		printf("MINOR");
	}
	else if(age>18&&age<=60){
		printf("ADULT");
	}
	else if(age>60&&age<=200){
		printf("OLD");
	}
	else 
	printf("Enter Correct Age");
	return 0;
}
