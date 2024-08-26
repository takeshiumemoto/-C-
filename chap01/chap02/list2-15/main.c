#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    printf("視野拡大暗算トレーニング開始\n");
    time_t start = time(NULL);

    for (int stage = 0; stage < 10; stage++) {
        int a = 10 + rand() % 90;
        int b = 10 + rand() % 90;
        int c = 10 + rand() % 90;
        int n = rand() % 17;

        // 数式の表示
        printf("%d%*s+%*s%d%*s+%*s%d = ", a, n, "", n, "", b, n, "", n, "", c);

        while (1) {
            int x;
            scanf("%d", &x);

            if (x == a + b + c) {
                break;  // 正しい回答が入力されたらループを抜ける
            }

            printf("\a違います。再入力してください: ");
        }
    }

    time_t end = time(NULL);
    printf("%.0f秒かかりました\n", difftime(end, start));

    return 0;
}
