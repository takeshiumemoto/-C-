#include <stdio.h>

int main(void) {
    int x;
    printf("段数: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j < i; j++) {
            putchar(' ');  // スペースを出力して、右にずらす
        }
        printf("%d\n", i % 10);  // 数字を出力して改行
    }

    return 0;
}
