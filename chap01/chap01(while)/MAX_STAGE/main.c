#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE 10

int main(void){
    srand(time(NULL));

    int ans=rand()%1000;
    int no;

    int num[MAX_STAGE];
    int stage=0;

    printf("0~9９９の整数を入力しよう\n\n");

    do{
        printf("残り%d回、いくつかな",MAX_STAGE-stage);
        scanf("%d",&no);
        num[stage++]=no;

        if(no>ans){
            printf("もっと小さいよ:\n\n");
        }
        else if(no<ans){
            printf("もっと大きいよ\n\n");
        }
    }while (no!=ans&&stage<MAX_STAGE);

    if(no!=ans){
        printf("残念、正解は%dでした\a\n",ans);
    }else{
        printf("正解です\n");
        printf("%d会で当たりましたね\n",stage);
    }
    puts("\n--入力履歴--");
    for(int i=0;i<stage;i++){
        printf("%2d: %4d %+4d\n",i+1,num[i],num[i]-ans);
    }
    return 0;
}