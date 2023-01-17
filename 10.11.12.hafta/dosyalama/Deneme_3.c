#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int no;
char ad[20];
char bolum[20];

FILE *fptr;

void kisiEkle() {

    if ((fptr = fopen("Deneme_3.txt","a")) == NULL)
        printf("Dosya olusturulamadi!!!\n");
    printf("\nNumarasi  : ");      scanf("%d",&no);    
    printf("Ad          : ");      scanf("%s",ad);    
    printf("Bolum       : ");      scanf("%s",bolum);   

    fprintf(fptr,"%d\t%s\t%s\n",no, ad, bolum);
    printf("Kaydetme islemi tamamlandi\n");
    fclose(fptr);
}

void listele() {
    if ((fptr = fopen("Deneme_3.txt","r")) == NULL)
        printf("Dosya acilamadi!!!\n");

    printf("kayitli ogrenciler : \n");
    printf("********************* \n");
    printf("Numara\t\tAd\t\tBolum\n");
    while (!feof(fptr))
    {
        fscanf(fptr,"%d\t%s\t%s\n",&no, ad, bolum);
        printf("Numara: %d\tAd: %s\tBolum: %s\n",no, ad, bolum);
    }
    printf("*********************\n");
    fclose(fptr);
}

void ara() {
    char isim[20];
    int  sonuc = 0;
    printf("Ogrencinin ismini giriniz: ");          scanf("%s",isim);

    if ((fptr = fopen("Deneme_3.txt","r")) == NULL)
        printf("Dosya acilamadi!!!\n");

    printf("%s isimli ogrencinin bilgileri : \n",isim);
    printf("********************* \n");
    printf("Numara\t\tAd\t\tBolum\n");

    while (!feof(fptr))
    {
        fscanf(fptr,"%d\t%s\t%s\n",&no, ad, bolum);
        if (strcmp(isim,ad) == 0){
            printf("Numara: %d\tAd: %s\tBolum: %s\n",no, ad, bolum);
            sonuc = 1;
            break;
        }
    }
    printf("*********************\n");
    fclose(fptr);

    if(sonuc == 0)
        printf("Aranan ogrenci listede yok!!!");
}

int main() {
    int secim;

    while (1)
    {
        printf("\n1- Ekle\n");
        printf("2- Listele\n");
        printf("3- Ara\n");
        printf("0- Cikis\n");
        printf("Seciminiz: ");
        int x = scanf("%d",&secim);
        printf("\n");

        if (secim == 1)
            kisiEkle();
        else if(secim == 2)
            listele();
        else if(secim == 3)
            ara();
        else if(secim == 0)
            break;
        else if (secim < 0 || secim > 3)
            printf("Hatali giriz yaptiniz, Tekrar giriniz\n");
        else
            break;
        if ( x != 1)
            break;
        
    
    }
    
    return 0;
}