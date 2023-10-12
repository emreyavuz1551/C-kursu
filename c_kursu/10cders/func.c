#include <stdio.h>
#include <math.h>

float CemberCapiHesapla(float yaricap);
float CemberCevresiHesapla(float yaricap);
float DaireAlaniHesapla(float yaricap);

int main (){
    float yaricap, cap, cevre, alan;

    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f", &yaricap);

    cap = CemberCapiHesapla(yaricap);
    cevre = CemberCevresiHesapla(yaricap);
    alan = DaireAlaniHesapla(yaricap);

    printf("Çemberin çapı = %.2f birimdir \n" , cap);
    printf("Çemberin çevresi = %.2f birimdir \n" , cevre);
    printf("Dairen alanı = %.2f birimdir \n" , alan);
    return 0 ;
}
float CemberCapiHesapla(float yaricap){
    return(2 * yaricap);
}
float CemberCevresiHesapla(float yaricap){
    return(2 * 3.14 * yaricap);
}
float DaireAlaniHesapla(float yaricap){
    return(3.14 * yaricap * yaricap);
}
