#include <stdio.h>

int main(void){
    double x;
    int w,p;

    printf("実数値"); scanf("%lf",&x);
    printf("全体の桁数:"); scanf("%d",&w);
    printf("少数部の桁数:"); scanf("%d",&p);

    printf("%*.*f\n",w,p,x);
    return 0;
}