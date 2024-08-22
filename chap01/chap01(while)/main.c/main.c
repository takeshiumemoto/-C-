#include <stdio.h>

int main(void){
    printf("0~９の整数を当てよう\n\n");
    int ans=7;
    int no;
    while(1){
        printf("いくつかな\n");
        scanf("%d",&no);

        if(no>ans){
            printf("もっと小さいよ\n\n");
        }
        else if(no<ans){
            printf("もっと大きいよ\n\n");
        }
        else
            break;
    }
    printf("正解です");
    return 0;
}