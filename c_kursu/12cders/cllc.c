#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *isaretci, toplam = 0;
    printf("Toplanacak eleman sayısını giriniz: ");
    scanf("%d", &n);

    isaretci = (int*) calloc(n, sizeof(int));

    if (isaretci == NULL) {
        printf("Hata! bellek ayırma işlemi başarısız oldu");
        exit(0);
    }

    printf("Toplanacak elemanları giriniz:  ");
    for (i = 0; i < n; ++i) {
        scanf("%d", isaretci + i); // Burada 'isaretci + i' kullanarak doğru elemana erişiyorsunuz.
        toplam += *(isaretci + i);
    }
    printf("Toplam = %d", toplam);

    free(isaretci);
    return 0;
}
