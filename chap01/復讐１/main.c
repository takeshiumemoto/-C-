#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char** argv){
    srand(time(NULL));
    int a=rand()%6;
    if(a==0){
        printf("daikiti");
    }
    if(a==1){
        printf("tyuukiti");
    }
    if(a==2){
        printf("syokiti");
    }
    if(a==3){
        printf("kiti");
    }
    if(a==4){
        printf("suekiti");
    }
    if(a==5){
        printf("kyou");
    }
    if(a==6){
        printf("daikyou");
    }
}
