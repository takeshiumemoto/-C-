#include <stdio.h>

int main(void){
    printf("０〜９の整数を当てよう\n\n");
    int ans =7;
    int no;
    printf("いくつかな:");
    scanf("%d",&no);

    do{
    if(no>ans){
        printf("もっと小さいよ\a\n");
    }    
    else if(no<ans){
        printf("もっと大きいよ\a\n");
    }
    }while (no!= ans);
        printf("正解です\n");
    return 0;
}