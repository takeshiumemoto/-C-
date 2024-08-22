#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    int ans = rand()%1000;
    int no;
    printf("0~999の整数を当ててみよう!!\n\n");
    do{
        printf("いくつかな");
        scanf("%d",&no);
        if(no>ans){
            printf("もっと小さいよ\a\n");
        }
        else if(no<ans){
            printf("もっと大きいよ");
        }
    } while(no!=ans);
    printf("正解です\n");
    return 0;
}