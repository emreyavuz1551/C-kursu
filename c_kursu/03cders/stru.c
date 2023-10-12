#include <stdio.h>
#include <string.h>

struct PersonelBilgisi
{
    int Yas;
    float Maas;
    char isim[30];
    char Cinsiyet[8];
};

int main()
{
    // PersonelBilgisi yapısında, Personel1 isimli değişken tanımla
    struct PersonelBilgisi Personel1;
    strcpy(Personel1.isim, "Emre Yavuz");
    strcpy(Personel1.Cinsiyet, "Erkek");
    Personel1.Yas = 23;
    Personel1.Maas = 12000;

    printf("Personelin Adı: %s\n", Personel1.isim);
    printf("Personelin Cinsiyeti: %s\n", Personel1.Cinsiyet);
    printf("Personelin Maaşı: %f\n", Personel1.Maas);
    printf("Personelin Yaşı: %d\n", Personel1.Yas);

    printf("\n...............\n");

    struct PersonelBilgisi Personel2 = {33, 8800, "Akif Yavuz", "Erkek"};
    printf("Personelin Adı: %s\n", Personel2.isim);
    printf("Personelin Cinsiyeti: %s\n", Personel2.Cinsiyet);
    printf("Personelin Maaşı: %f\n", Personel2.Maas);
    printf("Personelin Yaşı: %d\n", Personel2.Yas);

    printf("\n...............\n");

    struct PersonelBilgisi Personel2Kopyasi;
    Personel2Kopyasi = Personel2;

    printf("Personelin Adı: %s\n", Personel2Kopyasi.isim);
    printf("Personelin Cinsiyeti: %s\n", Personel2Kopyasi.Cinsiyet);
    printf("Personelin Maaşı: %f\n", Personel2Kopyasi.Maas);
    printf("Personelin Yaşı: %d\n", Personel2Kopyasi.Yas);

    return 0;
}
