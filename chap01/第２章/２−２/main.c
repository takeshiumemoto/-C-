#include <stdio.h>

void gput(const char *s,int speed){
    printf("文字を入力する");
    scanf("%d",&s);
    sleep(speed);
}