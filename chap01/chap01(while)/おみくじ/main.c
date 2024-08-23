#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char** argv){
    srand(time(NULL));
    int a=rand()%100;

    if(a<20){
        printf("daikiti");
    }
    else if(a<50){
        printf("tyuukiti");
    }
    else if(a<75){
        printf("syoukiti");
    }
    else if(a<90){
        printf("kiti");
    }
    else if(a<95){
        printf("suekiti");
    }
    else if(a<99){
        printf("kiti");
    }
    else{
        printf("ddaikyou");
    }
}    