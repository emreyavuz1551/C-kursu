#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dizi;
    int n, i;

    // Başlangıçta bir elemanlı bir dizi oluşturuyoruz.
    dizi = (int *)malloc(sizeof(int));

    if (dizi == NULL) {
        printf("Hata! Bellek ayırma işlemi başarısız oldu.\n");
        exit(0);
    }

    n = 0; // Dizinin şu anki boyutu

    // Kullanıcıdan elemanları alıyoruz
    while (1) {
        printf("Dizinin %d. elemanını girin (-1 çıkış için): ", n + 1);
        scanf("%d", &dizi[n]);

        if (dizi[n] == -1) {
            break;
        }

        n++; // Dizi boyutunu bir artır
        dizi = (int *)realloc(dizi, (n + 1) * sizeof(int)); // Diziyi yeniden boyutlandır
        if (dizi == NULL) {
            printf("Hata! Bellek yeniden boyutlandırma işlemi başarısız oldu.\n");
            return 1;
        }
    }

    printf("Girilen elemanlar: ");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    free(dizi); // Belleği serbest bırak

    return 0;
}
