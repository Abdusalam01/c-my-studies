#include <stdio.h>
#include <stdarg.h>  // Esnek argümanlı fonksiyon tanımlaması yapabilmek için stdarg.h kütüphanesinde üç tane makro fonksiyon tanımlanmıştır.

int topla(int , ...);

int main() {

    printf("Topla(2,11,22)                   = %d\n",topla(2,11,22));
    printf("Topla(3,11,22,33)                = %d\n",topla(3,11,22,33));
    printf("Topla(4,11,22,33,44)             = %d\n",topla(4,11,22,33,44));
    printf("Topla(5,11,22,33,44,55)          = %d\n",topla(5,11,22,33,44,55));

    return 0;
}

int topla(int n, ...) {

    va_list ap; // ardışık esnek argümalar için tip belirleyici
    int top = 0;

    va_start(ap,n); // va_list tipinde bildirilmiş ap göstericisi için bellekten n elemanlı yer ayırır.

    for (int i = 1; i <= n; i++)
    {
        top += va_arg(ap,int);  // Veri tipi tip ile belirlenmiş küme elemanlarına erişimi sağlar.
    }
    va_end(ap);  // va_list tipinde bildirilmiş ap göstericisi için bellekten bölgeyi boşaltır.

    return top;
}