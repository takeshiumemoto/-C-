#include <ctype.h>
#include <stdio.h>
#include <limits.h>

int main(void){
    for(int i=1;i<=CHAR_MAX;i++){
        switch(i){
            case '\a' :printf("\\a"); break;
            case '\b' :printf("\\b"); break;
            case '\f' :printf("\\f"); break;
            case '\n' :printf("\\n"); break;
            case '\r' :printf("\\r"); break;
            case '\t' :printf("\\v"); break;
            case '\v' :printf("\\v"); break;
            default :printf("%c",isprint(i)?i:' ');
        }
        printf("%02X\n",i);
    }
    return 0;
}