#include<stdio.h>
int main()
{
	int num,rem=0,rev=0,i,org=0;
	printf("enter the number =");
	scanf("%d",&num);
	org=num;
	while(num>0)
	{
	  rem=num%10;
      rev=rem+(rev*10);
	  num= num/10;
	 }
	 printf("%d\n",num);
	 if (rev==org){
	 printf("Reversed number %d",rev);
	 }else	 
	 printf("not palindrome");
	  return 0;
}
