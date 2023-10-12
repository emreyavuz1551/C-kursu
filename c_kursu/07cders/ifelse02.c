#include <stdio.h>

int main(){
    int sayi;
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0)
    {
        printf("Girmiş olduğunuz sayı pozitiftir");
    }

    else if (sayi < 0)
    {
        printf("Girmiş olduğunuz sayı negatiftir");

    }
    
    else
    {
        printf("Girmiş olduğunuz sayı sıfırdır");
    }
    
    return 0;
}