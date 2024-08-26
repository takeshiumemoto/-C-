#include <stdio.h>

int main(){
    int num;
    int sum=0;

    printf("せいの整数を入力してください:\n");
    while(1){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        if(num>0){
            sum +=num;
        }else{
            printf("せいの整数を入力してください");
        }
    }
    printf("合計は%dです",sum);
    return 0;
}
