#include <ctype.h>
#include <stdio.h>
#include <limits.h>

void strdump(const char *s){
    while(*s){
        unsigned char x =(unsigned char)*s;

        printf("%c  ",isprint(x)?x:' ');
        printf("%0+X ",(CHAR_BIT +3)/4,x);
        for(int i=CHAR_BIT -1;i>0;i--){
            putchar(((x>>i)&1U)?'1':'0');
            putchar('\n');
            s++;
        }
    }
}
int main(void){
    puts("漢字");strdump("漢字"); putchar('\n');
    puts("12日本語AB"); strdump("12日本語AB"); putchar('\n');
     return 0;
}