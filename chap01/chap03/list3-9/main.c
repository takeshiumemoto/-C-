#include <time.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int draw;
    int lose;
    int win;
}Score;

char *hd[]={"グー","チョキ","パー"};

void initialize(Score *s){
    s->win = s->lose = s->draw=0;
    srand(time(NULL));
    printf("じゃんけんゲーム開始\n");
}

void jyanken(int *h_hand, int *c_hand){
    *c_hand = rand()%3;

    do{
        printf("\nじゃんけんぽん");
        for(int i=0;i<3;i++){
            printf("(%d)%s",i,hd[i]);
        printf(":");
        scanf("%d",h_hand);  
        }
    }while(*h_hand<0||*h_hand);
}

void update_Score(Score *s,int result){
    switch(result){
        case 0: s->draw++; break;
        case 1: s->lose++; break;
        case 2: s->win++; break;
    }
}
void disp_result(int result){
    switch(result){
        case 0: puts("引き分けです。"); break;
        case 1: puts("あなたの負けです"); break;
        case 2: puts("あなたの勝ちです"); break;
    }
}
int confirm_retry(void){
    int x;
    printf("もう一度挑戦しますか   (0)いいえ(1)はい");
    scanf("%d",&x);
    return x;
}

int main(void){
    Score score;
    initialize(&score);
    int retry;
    do{
        int human;
        int comp;

        jyanken(&human,&comp);
        printf("私は%sであなたなは%sです\n",hd[comp],hd[human]);
        int judge = (human-comp+3)%3;
        update_Score(&score,judge);
        disp_result(judge);
        retry = confirm_retry();
    }while(retry==1);
    printf("%d勝%d敗%d分けでした\n",score.win,score.lose,score.draw);
    return 0;
}