#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sleep_ms(int miliseconds){
    clock_t start_time=clock();
    while(clock()<start_time+miliseconds*CLOCKS_PER_SEC/1000);
}
void vput(const char*s,int d,int e,int n){
    for(int i=0;i<n;i++){
        printf("%s",s);
        fflush(stdout);
        sleep_ms(d);
        int len=strlen(s);
        printf("\r%*s",len,"");
        fflush(stdout);
        sleep_ms(e);
        printf("\r");
    }
}
int main(void){
    vput("Hello",500,500,5);
    return 0;
}