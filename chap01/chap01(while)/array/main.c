#include <stdio.h>

int main(void){
    int a[]={1,3,5,7,9,11};
    int na=sizeof(a)/sizeof(a[0]);
    printf("配列aの要素数は%dです.\n",na);
    for(int i=0;i<na;i++){
        printf("a[%d] =%d\n",i,a[i]);
    }
    return 0;
}