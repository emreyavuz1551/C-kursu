#include <stdio.h>

enum Seviyeler{
    DUSUK = 14,
    ORTA = 23,
    YUKSEK = 27
};

int main(){
    enum Seviyeler OdaSicakligi = YUKSEK;

    printf("%d", OdaSicakligi) ;

    return 0;
}