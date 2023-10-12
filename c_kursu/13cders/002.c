#include <stdio.h>

int x = 10;
int y = 50;

int main(){
    extern int y;
    printf("global olan x değişkenin değeri: %d\n",x);
    printf("extern olan x değişkenin değeri: %d",y);
    return 0;
}