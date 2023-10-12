#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000
int main(){
    char veri[VERI_BOYUTU];
    FILE * fPtr;
    fPtr = fopen("dosya1.txt", "w+");

    if (fPtr == NULL)
    {
        printf("Dosya oluşturulmadı");
        exit(EXIT_FAILURE);
    }
    printf("Dosyaya kaydedilecek bilgiyi giriniz: \n");
    fgets(veri,VERI_BOYUTU,stdin);

    fputs(veri,fPtr);
    
    fclose(fPtr);

    printf("Dosya başarı ile oluşturuldu ve kaydedildi....) \n");

    return 0;
}