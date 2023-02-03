#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dugum
{
    char ad[20];
    char soyad[20];
    int yas;
    struct dugum *ptr;
} Ogrenci;

int main(int argc, char* argv[]) {
    Ogrenci og1,og2,og3;
    Ogrenci *bas;

    strcpy(og1.ad,"Musa");
    strcpy(og1.soyad,"Han");
    og1.yas = 23;

    strcpy(og2.ad,"Ahmet");
    strcpy(og2.soyad,"Erol");
    og2.yas = 43;

    strcpy(og3.ad,"Busra");
    strcpy(og3.soyad,"Tuncay");
    og3.yas = 30;
    
    og1.ptr = &og2;
    og2.ptr = &og3;
    og3.ptr = NULL;
    
    /*
    printf("----- DEGISKENLERIN BELLEKTEKI ADRESI -----\n");
    printf("og1'in bellekteki adresi: %p\n", &og1);
    printf("og2'in bellekteki adresi: %p\n", &og2);
    printf("og3'in bellekteki adresi: %p\n\n", &og3);

    printf("og1.ptr'nin gosterdigi adres : %p\n", og1.ptr);
    printf("og2.ptr'nin gosterdigi adres : %p\n", og2.ptr);
    printf("og3.ptr'nin gosterdigi adres : %p\n", og3.ptr);

    printf("----------- OGRENCI BILGILERI -----------\n");
    printf("Ad: %s\tSoyad: %s\tYas: %d\n", og1.ad,og1.soyad,og1.yas);
    printf("Ad: %s\tSoyad: %s\tYas: %d\n", og2.ad,og2.soyad,og2.yas);
    printf("Ad: %s\tSoyad: %s\tYas: %d\n\n", og3.ad,og3.soyad,og3.yas);

    printf("og1'in bir otesindeki ogrencinin bilgileri -->  Ad: %s\tSoyad: %s\tYas: %d\n",og1.ptr->ad,og1.ptr->soyad,og1.ptr->yas);

    printf("og1'in 2 otesindeki ogrencinin bilgileri   -->  Ad: %s\tSoyad: %s\tYas: %d\n", og1.ptr->ptr->ad,  og1.ptr->ptr->soyad,  og1.ptr->ptr->yas);
    */

    
    



    return 0;
}
