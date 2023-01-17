#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char ad[30];
    char soyad[30];
    float boy;
    int yas;
} ogrenci;


int main(){
    ogrenci burak;
    strcpy(burak.ad,"Burak");
    strcpy(burak.soyad,"Erol");
    burak.boy = 1.70;
    burak.yas = 24;

    FILE *fprt;
    fprt = fopen("Ornek7.txt","w");
    if (fprt == NULL)
        printf("Ornek7.txt Dosyasi Acilamadi...!!!");
    fprintf(fprt,"Ad: %s\tSoyat: %s\tYas: %d\tBoy: %.2f\n",burak.ad,burak.soyad,burak.yas,burak.boy);

    fclose(fprt);


    return 0;
}