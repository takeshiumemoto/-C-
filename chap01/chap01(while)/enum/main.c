#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char**argv){
    int min,max,ans,level,no;
    int stage=10;

    printf("数当てゲームへようこそ\n");
    printf("レベルを選択してください（1: 簡単, 2: 普通, 3: 難しい）: ");
    scanf("%d",&level);

    switch(level){
        case 1:
        min =1;
        max =10;
        break;
        case 2:
        min =1;
        max =15;
        break;
        case 3:
        min =1;
        max =20;
        break;
        default:
            printf("無効なレベルが選択されました、デフォルトでレベル２選択肢まし\n");
            min=1;
            max=15;
            break;
    }
    ans = min +rand()%(max-min+1);

    printf("範囲: %d から %d までの整数を当ててください！\n\n", min, max);

    // 数当てゲームの開始
    do {
        printf("残り%d回、いくつかな: ", stage);
        scanf("%d", &no);
        stage--;

        if (no < min || no > max) {
            printf("入力が範囲外です！\n");
            continue;
        }

        if (no > ans) {
            printf("もっと小さいよ\n");
        } else if (no < ans) {
            printf("もっと大きいよ\n");
        } else {
            printf("正解です！\n");
            break;  // 正解が出た場合、ループを終了する
        }

    } while (stage > 0);

    if (stage == 0 && no != ans) {
        printf("残念、正解は%dでした。\n", ans);
    }

    return 0;
}

