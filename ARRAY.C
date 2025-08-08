#include<stdio.h>
int main()
{
    float marks[]={10,20,30,40};
   // marks[0]=50.5;3
    //marks[1]=50.5;
    //marks[2]=50.5;
  //  marks[3]=50.5;
  //  marks[1]=50.5;
   // printf("%f",marks[0]);
    //printf("%f",marks[1]);
    //printf("%f",marks[2]);

    for (int i=0;i<8; i++)
    {
      printf("%f\t",marks[i]);
    }
    return 0;
}