#include <stdio.h>

int main(){

    int eklenecek_sayi, eklenecek_indeks;
    int benimDizim[] = {3,4,1,9,6,2,8};
    int boyut = sizeof(benimDizim) / sizeof(benimDizim[0]);
    for(int indeks = 0; indeks < boyut; indeks++)
    {
        printf("%d",benimDizim[indeks]);

    }
    printf("\nDiziye eklenecek sayıyı giriniz ");
    scanf("%d", &eklenecek_sayi);
    printf("Sayının hangi indekese ekleneceğini belirtiniz: ");
    scanf("%d",&eklenecek_indeks);

    for (int indeks = boyut -1; indeks > eklenecek_indeks; indeks--)
    {
        benimDizim[indeks] = benimDizim[indeks - 1];
    }
    benimDizim[eklenecek_indeks] = eklenecek_sayi;

    for (int indeks = 0; indeks < boyut; indeks++)
    {
        printf("%d ",benimDizim[indeks]);

    }
    return 0;
}