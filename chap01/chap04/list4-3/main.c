#include <stdio.h>
#include <stdlib.h>

int main(void){
    char temp[20];
    printf("整数を入力せよ");
    scanf("%s",temp);
    printf("%dと入力しましたね\n",atoi(temp));
    return 0;
}