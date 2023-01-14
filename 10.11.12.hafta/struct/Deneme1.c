#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
    char ad[20];
    char soyad[20];
    int yas;
    float boy;
};

typedef struct
{
    char ad[20];
    char soyad[20];
    int yas;
    float boy;
} hoca;


int main() {
    struct ogrenci faruk;
    strcpy(faruk.ad,"Faruk");
    strcpy(faruk.soyad,"Yilmaz");
    faruk.yas = 23;
    faruk.boy = 1.78;

    printf("%s",faruk.ad);
    printf(" %s\n",faruk.soyad);
    printf("%d\n",faruk.yas);
    printf("%.2f\n",faruk.boy);

    struct ogrenci faruk_kopya;
    faruk_kopya = faruk;

    printf("\nFaruk'un kopya si\n");
    printf("%s",faruk_kopya.ad);
    printf(" %s\n",faruk_kopya.soyad);
    printf("%d\n",faruk_kopya.yas);
    printf("%.2f\n",faruk_kopya.boy);

    if (faruk.yas == faruk_kopya.yas)  // <--
    {
        printf("1\n");
    }
    
    hoca hoca1;
    strcpy(hoca1.ad,"Ayse");
    strcpy(hoca1.soyad,"Gokturk");
    hoca1.yas = 38;
    hoca1.boy = 1.70;

    printf("%s",hoca1.ad);
    printf(" %s\n",hoca1.soyad);
    printf("%d\n",hoca1.yas);
    printf("%.2f\n",hoca1.boy);
    
    return 0;
}
