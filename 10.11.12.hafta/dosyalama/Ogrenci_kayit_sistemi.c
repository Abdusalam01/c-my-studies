#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1) Bir simftaki ögrencilerin numaras?, ad, vize notu ve final notu bilgileri üzerinde çesitli islemler yapabilecek bir program yazinz.
a) Program bir ana menù ile açrlacak. Menüde olacak seçenekler su sekildedir:
1 - Yeni Kayrt EkLeme
2 - Kayrt Listeleme
3 - Kayrt Güncelleme
4- Simf Ortalamas? Hesapla
5 - Ortalamaya Göre En Basarl Ögrenci Bilgisini Göster
b) Program hafizadan minimum miktarda alan tüketmelidir. Bunun için dinamik hafrza yöntemi gerçeklestiriniz.
c) Kart güncelleme ögrenci numarasina göre olacak.
*/

typedef struct kayit
{
    int numara;
    char ad[20];
    int vize;
    int final;

} Ogrenci;

int menu();
void yeniKayit(Ogrenci *ptr,int n);
void kayitListele(Ogrenci *ptr, int n);
void kayitGuncelle(Ogrenci *ptr, int n);
void ortalama(Ogrenci *ptr, int n);
void enBasarili_ogrenci(Ogrenci *ptr, int n);

int main() {
    int secim;
    int n;
    FILE *dosya;
    if ((dosya = fopen("Ogrenci_kaydi.txt","w")) == NULL)
        printf("Dosya olusturulamadi!!!");

    printf("Kac ogrenci Kayit etmek istersiniz: ");     scanf("%d",&n);

    Ogrenci *ptr = (Ogrenci *)malloc(n * sizeof(Ogrenci));

    Ogrenci *kptr = ptr;

    secim = menu();

    while (secim != 0)
    {
        if (secim == 1)
            yeniKayit(ptr,n);
        else if ( secim == 2)
            kayitListele(ptr,n);
        else if(secim == 3)
            kayitGuncelle(ptr,n);
        else if(secim == 4)
            ortalama(ptr,n);
        else if(secim == 5)
            enBasarili_ogrenci(ptr,n); 
        else if(secim == 0)       
            exit(0);
        else 
            printf("Hatali secim yaptiniz!!!\n");

        secim = menu();
    }
    fclose(dosya);
    return 0;
}





int menu() {
    int secim;

    printf("1- Yeni kayit ekleme\n");
    printf("2- Kayit listeleme\n");
    printf("3- Kayit Guncelleme\n");
    printf("4- Sinif Ortalamasini Hesapla\n");
    printf("5- Ortalamaya Gore Basarili Ogrenci Bilgilerini Goster\n");
    printf("0- Cikis\n");
    printf("Seciminiz : "); scanf("%d",&secim);
    printf("\n");

    return secim;
}

void yeniKayit(Ogrenci *ptr,int n) {
    int numara;
    char ad[20];
    int vize;
    int final;

    Ogrenci *kptr;
    kptr = ptr;

    int i = 0;

    printf("Yeni kayit edilecek ogrenci bilgilerini giriniz: \n");
    while (i < n)
    {
        printf("%d. Ogrenci bilgilerini giriniz: \n",i + 1);
        printf("Numara  : ");        scanf("%d",&numara);
        printf("Ad      : ");        scanf("%s",ad);
        printf("Vize    : ");        scanf("%d",&vize);
        printf("Final   : ");        scanf("%d",&final);

        ptr->numara = numara;
        strcpy(ptr->ad,ad);
        ptr->vize = vize;
        ptr->final = final;

        i++;
        ptr++;
    }
    printf("Kayit islemi tamamlandi\n\n");
    i = 0;

    FILE *fptr;
    if((fptr = fopen("Ogrenci_kaydi.txt","r+")) == NULL)
        printf("Dosya acilamadi!!!");

    fprintf(fptr,"-------------- OGRENCI KAYITLARI -------------\n\n");

    fprintf(fptr,"***** Ogrenici Bilgileri ***** \n\n");
    while (i < n)
    {
        fprintf(fptr,"%d. Numarali Ogrenci bilgilerini: \n", kptr->numara);
        fprintf(fptr,"Ad      : %s\n",kptr->ad);
        fprintf(fptr,"Vize    : %d\n",kptr->vize);
        fprintf(fptr,"Final   : %d\n",kptr->final);
        fprintf(fptr,"------------------*----------------- \n\n");

        i++;
        kptr++;
    }
    fprintf(fptr,"\n\n");
    fclose(fptr);
}

void kayitListele(Ogrenci *ptr, int n) {
    
    int i = 0;

    while (i < n)
    {
        printf("%d. Numarali Ogrenci bilgileri : \n",ptr->numara);
        printf("Ad      : %s\n",ptr->ad);
        printf("Vize    : %d\n",ptr->vize);
        printf("Final   : %d\n",ptr->final);
        printf("-------------------------------\n");

        i++;
        ptr++;
    }
    printf("Listeleme islemi tamamlandi.\n\n");
}

void kayitGuncelle(Ogrenci *ptr, int n) {
    int numara;
    char ad[20];
    int vize;
    int final;

    printf("Kaydi yenilenecek ogrenci numarasi: ");     scanf("%d",&numara); 
    int i = 0;

    while (i < n)
    {
        int sonuc = 0;
        if (numara == ptr->numara)
        {
            printf("%d. Numarali Ogrenci bilgilerini giriniz: \n", numara);
            printf("Ad      : ");        scanf("%s",ad);
            printf("Vize    : ");        scanf("%d",&vize);
            printf("Final   : ");        scanf("%d",&final);

            ptr->numara = numara;
            strcpy(ptr->ad,ad);
            ptr->vize = vize;
            ptr->final = final;
            sonuc = 1;
        }
        if (sonuc == 0)
            printf("%d. Numarali ogrenci listede yok!!!\n\n",numara);
        
        i++;
        ptr++;
    }
    printf("Kayit Guncelleme islemi tamamlandi\n\n");

}

void ortalama(Ogrenci *ptr, int n) {
    int ort,son_ort,toplam = 0;

    int i = 0;

    while (i < n)
    {
        ort = ptr->vize * 0.4 + ptr->final * 0.6;
        toplam += ort;

        i++;
        ptr++;
    }
    son_ort = toplam / n;
    printf("Sinif Ortalamasi: %d\n\n",son_ort);


    i = 0;
    FILE *fptr;
    if((fptr = fopen("Ogrenci_kaydi.txt","r+")) == NULL)
        printf("Dosya acilamadi!!!");
    fseek(fptr, 0, SEEK_END);
    fprintf(fptr,"SINIFIN ORTALAMASI --> %d\n",son_ort);
    fprintf(fptr,"------------------*-----------------\n\n");
    
    fprintf(fptr,"\n\n");
    fclose(fptr);
    
}

void enBasarili_ogrenci(Ogrenci *ptr, int n) {

    int numara;
    char ad[20];

    int buyuk = 0;
    int ort;

    int i = 0;

    while (i < n)
    {
        ort = ptr->vize * 0.4 + ptr->final * 0.6;
        if (buyuk < ort)
        {
            buyuk = ort;
            numara = ptr->numara;
            strcpy(ad,ptr->ad);
            ort = buyuk;
        }
        

        i++;
        ptr++;
    }
    printf("En basarili ogrenci bilgileri : \n");
    printf("Numara      : %d\n",numara);
    printf("Ad          : %s\n",ad);
    printf("Ortalama    : %d\n",buyuk);
    printf("-------------------------------\n\n");

    i = 0;
    FILE *fptr;
    if((fptr = fopen("Ogrenci_kaydi.txt","r+")) == NULL)
        printf("Dosya acilamadi!!!");

    fseek(fptr, 0, SEEK_END);
    fprintf(fptr,"Sinifin En Basarili Ogrenci bilgileri :\n");
    fprintf(fptr,"Numara      : %d\n",numara);
    fprintf(fptr,"Ad          : %s\n",ad);
    fprintf(fptr,"Ortalama    : %d\n",buyuk);
    fprintf(fptr,"------------------*-----------------\n\n");

    
    fprintf(fptr,"\n\n");
    fclose(fptr);
}

