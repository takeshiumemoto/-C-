#include <stdio.h>

int main(int argc,char** argv){
    int a;
    printf("整数を入力してください");
    scanf("%d",&a);

    if(a%2==0){
        printf("偶数です");
    }else{
        printf("奇数です");
    }
}