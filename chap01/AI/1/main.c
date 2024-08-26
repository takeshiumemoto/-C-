#include <stdio.h>

int main(int argc,char** argv){
    int a=3,b=5;
    printf("%d,%d\n",a,b);

    int temp = a;
    a=b;
    b=temp;
    printf("%d,%d\n",a,b);
    return 0;
}