#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    srand(time(NULL));  // 乱数のシードを現在の時刻で設定

    // 最小値と最大値の範囲を乱数で決定
    int min = rand() % 100;     // 0から99の範囲で最小値を決定
    int max = min + rand() % 100 + 1;  // minからさらに0〜100の範囲で最大値を決定

    // 正解の数を決定
    int ans = min + rand() % (max - min + 1);  

    int no;
    int stage = 10;

    printf("数当てゲームを開始します！\n");
    printf("範囲: %d から %d までの整数\n\n", min, max);

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
