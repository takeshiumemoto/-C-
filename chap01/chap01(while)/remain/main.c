#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    const int max_stage = 10;
    int remain = max_stage;
    int ans = rand()%1000;
    int no;
    printf("0~999の整数を当てよう\n\n");
    do {
        printf("残り%d回、いくつかな：",remain);
        scanf("%d",&no);
        remain--;

        if(no>ans){
            printf("もっと小さいよ\a\n");
        }
        else if(no<ans){
            printf("もっと大きいよ\a\n");
        }
    } while(no!=ans && remain>0);

    if(no!=ans){
        printf("残念。正解は%dでした\a\n",ans);
    } else {
        printf("正解です\n");
        printf("%d回で当たりましたね。\n",max_stage-remain);
    }
    return 0;
}