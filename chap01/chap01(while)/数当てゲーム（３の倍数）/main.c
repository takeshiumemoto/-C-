#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    srand(time(NULL));
    int no;
    int ans = 3 + rand() % 1000;  // 正解の数
    int stage = 10;

    do {
        printf("残り%d回、いくつかな: ", stage);
        scanf("%d", &no);
        stage--;

        if (no > ans) {
            printf("もっと小さいよ\n");
        } else if (no < ans) {
            printf("もっと大きいよ\n");
        }

        // 3の倍数でない値が入力された場合、ループを終了する
        if (no % 3 != 0) {
            printf("3の倍数でない値が入力されたので終了します。\n");
            break;
        }
    } while (no != ans && stage > 0);

    return 0;
}
