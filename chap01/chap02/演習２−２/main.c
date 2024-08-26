#include <time.h>
#include <stdio.h>
#include <string.h>

// ミリ秒単位で待機する関数
void sleep_ms(int milliseconds) {
    clock_t start_time = clock();
    while (clock() < start_time + milliseconds * CLOCKS_PER_SEC / 1000);
}

void gput(const char *s, int speed) {
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        printf("%c", s[i]);
        fflush(stdout);
        sleep_ms(speed);
    }
    printf("\n");
}

int main(void) {
    char str[100];
    printf("文字列を入力してください: ");
    scanf("%s", str);  // 修正: 正しい形式で入力を受け取る
    gput(str, 100);
    return 0;
}
