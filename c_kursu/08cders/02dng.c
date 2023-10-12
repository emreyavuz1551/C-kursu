#include <stdio.h>

int main() {
    
    int i, n;
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tüm sayılar:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    
    printf(".....\n");

    i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
    
    printf("......\n");

    i = 1;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    

    return 0;
}
