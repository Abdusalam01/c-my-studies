#include <stdio.h>
#include <stdarg.h> // Esnek argümanlı fonksiyon tanımlaması yapabilmek için stdarg.h kütüphanesinde üç tane makro fonksiyon tanımlanmıştır.

int en_kucugu_bul(int, ...);

int main() {
    printf("\n\n");
    printf("En kucugu bul (7,23,11,44,51,52,8,29)                   : %d\n", en_kucugu_bul(7,23,11,44,51,52,83,29)); /* ilk sayi olan 7, 
    fonkisyona gönderilecek olan argüman sayısını belirlemekte, yani en_kucugu_bul bonkisyonuna göderilecek olan sayı listesinin eleman sayısını belirlemektedir. 
    7 o listeye dahil değildir o yüzden bu satır ekrana 11 sayısını döndürür.*/

    printf("En kucugu bul (5,64,22,45,23,87)                        : %d\n", en_kucugu_bul(5,64,22,45,23,87));
    printf("En kucugu bul (3,99,6,80)                               : %d\n", en_kucugu_bul(3,99,6,80));
    printf("En kucugu bul (10,12,41,24,52,64,77,23,74,91,17)        : %d\n", en_kucugu_bul(10,12,41,24,52,64,77,23,74,91,17));

    printf("\n\n");
    int n = 8;
    printf("En kucugu bul (42,17,29,79,23,37,53,61)                 : %d\n\n\n", en_kucugu_bul(n,42,17,29,79,23,37,53,61));
    return 0;
}

int en_kucugu_bul(int n, ...){
    va_list ap;  // ardışık esnek argümalar için tip belirleyici

    int i, en_kucuk,a;  // va_list tipinde bildirilmiş ap göstericisi için bellekten n elemanlı yer ayırır.

    va_start(ap,n);
    en_kucuk = va_arg(ap,int);  // Veri tipi int ile belirlenmiş küme elemanlarına erişimi sağlar.
    for (i = 2; i <= n; i++)
    {
        if (en_kucuk > (a = va_arg(ap,int)))
            en_kucuk = a;
    }
    va_end(ap);  // va_list tipinde bildirilmiş ap göstericisi için bellekten bölgeyi boşaltır.
    return en_kucuk;
}