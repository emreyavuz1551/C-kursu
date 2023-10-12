#include <stdio.h>

int main(){
    int gun;

    printf("Günün,haftanın kaçıncı günü olduğunu giriniz(1-7): ");
    scanf("%d",&gun);


    switch (gun)
    {
    case 1:
        printf("pazartesi");
        break;

    case 2:
        printf("salı");
        break;
    case 3:
        printf("çarşamba");
        break;
    case 4:
        printf("perşembe");
        break;
    case 5:
        printf("cuma");
        break;
    case 6:
        printf("cumartesi");
        break;
    case 7:
        printf("pazar");
        break;
    default:
        printf("Geçerli bir değer giriniz");    
    }

    return 0;

}