#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc,char** argv){
    srand(time(NULL));
    int no;
    int ans=rand()%1000;
    int stage=10;

    printf("0~999の整数を入力しよう：\n");
clock_t start = clock();
    do{
        printf("残り%d回、いくつかな",stage);
        scanf("%d",&no);    
        stage--;

        if(no>ans){
            printf("もっと小さいよ\n");
        }
        else if(no<ans){
            printf("もっと大きいよ\n");
        }
    }while(no!=ans &&stage>0);

    if(no!=ans){
        printf("残念、正解は%dです",ans);   
    }else{
        printf("正解です\n");
        printf("%d会で当たりました。",stage);
    }
    clock_t end = clock();
    double time_taken =(double)(end-start)/CLOCKS_PER_SEC;
    printf("%2f\n",time_taken);
    return 0;
}