#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi1, sayi2;
	int toplam, fark, carpim, mod;
	float bolum;
	printf("Please enter two number: ");
	scanf("%d%d",&sayi1,&sayi2);

	toplam =  sayi1 + sayi2;
	fark = sayi1 -sayi2;
	carpim = sayi1 * sayi2;
	bolum = (float)sayi1 / sayi2 ;
	mod = sayi1 % sayi2 ;

	printf("Toplam = %d\n",toplam) ;
	printf("Fark = %d\n",fark) ;
	printf("Carpim = %d\n",carpim) ;
	printf("Bolum = %f\n",bolum) ;
	printf("Mod= %d",mod) ;


	return 0;
}
