#include <stdio.h>

void wa_sa(int x, int y,int wa,int sa)
{
    wa = x+y;
    sa = x-y;
}

int main(void){
    int a=5,b=3,p=1,m=1;
    wa_sa(a,b,p,m);
    printf("%dと%dの和は%dで差は%dです\n",a,b,p,m);
    return 0;

}