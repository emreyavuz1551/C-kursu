#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fPtr;
    char karakter;

    fPtr = fopen("dosya1.txt", "r");

    if (fPtr == NULL)
    {
        printf("Dosya okunamadı. \n");
        printf("Dosyanın konumunu kontrol ediniz..");
        exit(EXIT_FAILURE);
    }
    printf("Dosya başarı ile açıldı ve okunuyor. \n\n");

    do
    {
        karakter = fgetc(fPtr);
        putchar(karakter);
    } while (karakter != EOF);
    fclose(fPtr);

    return 0;
    
}