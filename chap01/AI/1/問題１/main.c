#include <stdio.h>
#include <unistd.h>  // sleep() 関数を使用するために必要

int main() {
    for (int i = 0; i <= 100; i++) {
        printf("\rProgress: %d%%", i);
        fflush(stdout); // すぐに画面に反映させる
        sleep(1); // 1秒待機
    }
    printf("\n"); // 最後に改行を追加
    return 0;
}
