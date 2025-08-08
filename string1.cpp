#include<stdio.h>
int main()
{
//	char arr[]={'N','A','Y','A','N'};
    char arr[]="Hello";
    char *ptr=NULL,**pptr=NULL;
	//printf("%s\n", arr);
//	printf("%s\n", arr[2]);
    ptr=arr;
    
    *ptr++;
    *ptr++;
   
    **pptr++;
    printf("%s",arr);
    printf("%c",*ptr);
   // printf("%c",**pptr);
	return 0;
}
