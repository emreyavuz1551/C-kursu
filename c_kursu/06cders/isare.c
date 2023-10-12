#include <stdio.h>

int main(void)
{
  int *ip, id; // int bir işaretçi ve değişken bildirimi
  id = 21;
  ip = &id;    // id değişken adresini ip işaretçisine atar.

  // Değişken adını kullanarak id değişken değerini ekrana yazar.
  printf("id değişken değeri: %d\n", id);

  // İşaretçi kullanarak id değişken değerini ekrana yazar.
  printf("id değişken değeri: %d\n", *ip);

  // Değişken referansını kullanarak id değişken adresini ekrana yazar.
  printf("id değişken bellek adresi: %p\n", &id);

  // İşaretçi adını kullanarak id değişken adresini ekrana yazar.
  printf( "id değişken bellek adresi: %p", ip);

  return 0;
}
