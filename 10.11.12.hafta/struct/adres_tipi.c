#include<stdio.h>
#include<stdlib.h>
struct adres_tipi
{
    char sokak[15],aprtman[15];
    int daire;
    char mahalle[30],sehir[15],ilce[20];
}; 

struct kisi_bilgisi
{
    char isim[20];
    int kimlik_no;
    struct adres_tipi adres;
};

int main()
{
    struct kisi_bilgisi kisi;
    printf("Kisi adi: ");
    scanf("%s",kisi.isim);
    printf("Kisi kimkik numarasi: ");
    scanf("%d",&kisi.kimlik_no);
    printf("Sokak adi: ");
    scanf("%s",kisi.adres.sokak);
    printf("Apartman adi: ");
    scanf("%s",kisi.adres.aprtman);
    printf("Daire numarasi: ");
    scanf("%d",&kisi.adres.daire);
    printf("Mahalle adi: ");
    scanf("%s",kisi.adres.mahalle);
    printf("Ilce adi: ");
    scanf("%s",kisi.adres.ilce);/**/
    printf("Sehir adi: ");
    scanf("%s",kisi.adres.sehir);

    printf("\n%s\n",kisi.isim);
    printf("%s Mahallesi %s Sokak %s apt. Daire:%d %s/%s \n\n", kisi.adres.mahalle, kisi.adres.sokak, kisi.adres.aprtman, kisi.adres.daire, kisi.adres.ilce, kisi.adres.sehir);

    
    
    return 0;
}