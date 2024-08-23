#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));

    int a=100+rand()%900;
    int b=100+rand()%900;
    int c=100+rand()%900;

    printf("%d+%d+%dは何ですか",a,b,c);
    clock_t start = clock();
    while(1){
        int x;
        scanf("%d",&x);
        if(x==a+b+c)
        break;
        printf("\a違いますよ\n際入力してください");
    }    
    clock_t end =clock();
    double req_time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("%.lf秒かかりました。\n",req_time);

    if(req_time>30.0){
        printf("時間がかかりすぎです.\n");
    }
    else if(req_time>17){
        printf("まあまあですね");
    }
    else {
        printf("素早いですね\n");
    }
        
}