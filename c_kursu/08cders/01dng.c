#include <stdio.h>

int main(){

    int i, n, toplam = 0;
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        toplam += i ;

    }
    
    printf("İlk %d adet doğal sayının toplamı = %d",n,toplam);

    return 0 ;
}