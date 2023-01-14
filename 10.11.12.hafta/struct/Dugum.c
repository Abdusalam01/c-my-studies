#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dugum
{
    char ad[20];
    char soyad[20];
    int yas;
    struct Dugum *ptr;
}Ogrenci;

int main(){
    Ogrenci ahmet,ferit,mert;

    strcpy(ahmet.ad,"Ahmet");
    strcpy(ahmet.soyad,"Erol");
    ahmet.yas = 21;

    strcpy(ferit.ad,"Ferit");
    strcpy(ferit.soyad,"Yavuz");
    ferit.yas = 25;

    strcpy(mert.ad,"Mert");
    strcpy(mert.soyad,"Gumus");
    mert.yas = 33;

    ahmet.ptr = &ferit;
    ferit.ptr = &mert;
    mert.ptr = NULL;

    printf("\n----------- DEGISKENLERIN BELLEKTEKI ADRESLER -----------\n");
    printf("Ahmet'in bellekteki adresi: %p\n",&ahmet);
    printf("Feri'tin bellekteki adresi: %p\n",&ferit);
    printf("Mert'tin bellekteki adresi: %p\n\n",&mert);

    printf("Ahmet.ptr'nin gosterdigi adres: %p\n",ahmet.ptr);
    printf("Ferit.ptr'nin gosterdigi adres: %p\n",ferit.ptr);
    printf("Mert.ptr'nin gosterdigi adres: %p\n\n",mert.ptr);

    printf("----------- OGRENCI BILGILERI -----------\n");
    printf("Ad: %s\tSoyad: %s\tYas: %d\n", ahmet.ad,ahmet.soyad,ahmet.yas);
    printf("Ad: %s\tSoyad: %s\tYas: %d\n", ferit.ad,ferit.soyad,ferit.yas);
    printf("Ad: %s\tSoyad: %s\tYas: %d\n\n", mert.ad, mert.soyad,mert.yas);

    //Ahmetin uzerinden feritin bilgilerine ulasmak
    printf("Ahmet'in bir otesindeki ogrencinin bilgileri --> Ad: %s\tSoyad: %s\tYas: %d\n",ahmet.ptr->ad, ahmet.ptr->soyad, ahmet.ptr->yas);

    //Ferit'in uzerinden Mert'tin bilgilerine ulasmak
    printf("Ferit'in bir otesindeki ogrencinin bilgileri --> Ad: %s\tSoyad: %s\tYas: %d\n",ferit.ptr->ad, ferit.ptr->soyad, ferit.ptr->yas);

    //Ahmetin uzerinden Mert'tin bilgilerine ulasmak
    printf("Ahmet'in iki otesindeki ogrencinin bilgileri --> Ad: %s\tSoyad: %s\tYas: %d\n",ahmet.ptr->ptr->ad, ahmet.ptr->ptr->soyad, ahmet.ptr->ptr->yas);







    /*Dugum A,B;
    A.veri = 'A';
    B.veri = 'B';

    A.ptr = &B;
    B.ptr = NULL;

    printf("%c\n",A.ptr->veri);*/

    return 0;
}