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
    strcmp("burak",burak.ad);
    strcmp("erol",burak.soyad);
    burak.boy = 1.70;
    burak.yas = 22;

    FILE *fprt;
    fprt = fopen("Ornek7.txt","w");
    if (fprt == NULL)
    {
        printf("Ornek7.txt Dosyasi Acilamadi...!!!");
        exit(1);
    }
    fwrite (&burak,sizeof(ogrenci),1,fprt);

    fclose(fprt);
    return 0;
}