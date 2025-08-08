#include<stdio.h>
int main()
{
    char *ptr;
    char chr[]="RaViKaNt";
    ptr=chr;
    while(chr[*ptr]!='\0')
    {
      if(chr[*ptr]>='A'&&chr[*ptr]<='z'){
        chr[*ptr]+32;
      }
      else if(chr[*ptr]>='A'&&chr[*ptr]<='Z'){
       chr[*ptr]-32;
      }
      ptr++;
    }
    printf("\n%s",chr);

    return 0;
}
