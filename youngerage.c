#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter age of ram:");
    scanf("%d",&a);
    printf("enter age of shyam:");
    scanf("%d",&b);
    printf("enter age of ranga:");
    scanf("%d",&c);
    
    if(a<b&&a<c)
    {
        printf("a is younger");
    }
    if(b<a&&b<c)
    {
        printf("shyam is younger");
    }
    if(c<b&&c<a)
    {
        printf("ranga is younger");
    }
   
    return 0;
}