#include <stdio.h>
int main()
{
    int cp, sp;
    printf("enter the value of cp: ");
    scanf("%d", &cp);
    printf("enter the value of sp: ");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("profit %d", sp - cp);
    }
    else if (sp < cp)
    {
        printf("Loss %d", cp - sp);
    }
    else if(sp=cp)
    {
        printf("neither profit nor loss");
    }
    return 0;
}