#include <stdio.h>

int main(){
   int sayi1, sayi2;

   printf("lütfen iki sayı giriniz: ");
   scanf("%d%d", &sayi1, &sayi2);

   if(sayi1 > sayi2)
   {
    printf("%d daha büyüktür",sayi1);
   }

   if (sayi2 > sayi1)
   {
    printf("%d daha büyüktür",sayi2);
   }
   
   if (sayi1 == sayi2)
   {
    printf("iki sayı eşittir");
   }
   
   return 0;
}