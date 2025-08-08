#include<stdio.h>
int main()
{

    char arr[]="Hello";
    char *ptr;
    ptr= arr+2;
    ++*ptr;
    ptr++;
    --*ptr;
    printf("%s",arr);
	
	return 0;
}
