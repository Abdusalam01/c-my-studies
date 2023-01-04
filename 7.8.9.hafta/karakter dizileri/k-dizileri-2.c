#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//  İki karakter dizisini birleştirilerek tek bir karakter dizisi haline dönüştürmek için C'nin strcat() fonksiyonu kullanılır.

int main()
{   //   Girilen Karakter Dizilerini Birleştirmek
    char dizi1[50],dizi2[50];
    printf("Lutfen 1.karakteri giriniz: ");
    gets(dizi1);

    printf("Lutfen 2.karakteri giriniz: ");
    gets(dizi2);

    printf("\n%s\n", strcat(dizi1, dizi2)); // dizi1 ve dizi2'yi birlestirir ve ekrana yazar.

    return 0;
}