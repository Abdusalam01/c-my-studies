#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct firma_calisanlari
{
    char ad[15],soyad[15],bolum[15];
    int yas,aylik;
};
typedef struct firma_calisanlari fc;
int main()
{
    int ustu=0; // 30 yas ustu calisan sayısı tutar
    int ortalam=0; // firma calicanlarinin ortalama maasi tutar
    int toplam=0; // firma calisanlarinin maaslarinin toplani
    int enyuksek=0; // en yuksek maas
    char enyuksek_adi[15]; // en yuksek maasi alan kisinin adi
    char enyuksek_soyadi[15];// en yuksek maasi alan kisinin soyadi

    fc c[6];
    for (int i = 1; i < 6; i++)// 5 calisanın bilgisini toplayan fonkisyonun
    {
        printf("Calisan Adi: ");            scanf("%s",c[i].ad);
        printf("Calisan Soyadi: ");         scanf("%s",c[i].soyad);
        printf("Calisan Bolumu: ");         scanf("%s",c[i].bolum);
        printf("Calisan Yasi: ");           scanf("%d",&c[i].yas);
        printf("Calisan Maasi: ");          scanf("%d",&c[i].aylik);
        printf("\n");
    }
    for (int i = 1; i < 6; i++)// firmada 30 yas ustu calisan kaç kisinin oldugunu bulan dongu
    {
        if ((c[i].yas)>30)
            ustu++;      
    }
    printf("Firmasinda 30 yas ustu calisan sayisi: %d\n",ustu);
    

    for (int i = 1; i < 6; i++)// ortalama aylik bulma dongusu
    {
        toplam+=c[i].aylik;
        ortalam=toplam/5;
    }
    printf("Firmanin ortalama maasi: %d\n",ortalam);

    for (int i = 1; i < 6; i++)// en yuksek maasi alan kisiyi tutan dongu
    {
        if ((c[i].aylik)>enyuksek)
        {
            enyuksek=c[i].aylik;
            strcpy(enyuksek_adi,c[i].ad);
            strcpy(enyuksek_soyadi,c[i].soyad);
        }
    }
    printf("Firmakadi en yuksek maas alan kisi: %s %s  -->   Maasi: %d\n\n",enyuksek_adi,enyuksek_soyadi,enyuksek);

    
    return 0;
}