#include<stdio.h>
#include<string.h>
struct student
{
    int Roll;
    char Name[15];
    float Marks[5];
}s1;
void getvalue(struct student s)
{
    printf("ENTER Roll:");
    scanf("%d",s.Roll);
    priintf("enter name\n");
    gets(s.Name);
    printf("enter marks :");
    for(int i=0;i<5;i++)
    {
        
    }
}