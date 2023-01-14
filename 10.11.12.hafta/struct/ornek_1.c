#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct
{
    float oran;
    int vadesayisi;
}Kiredi;

struct Arac
{
    char marka_model[50];
    int modelYili;
    int km;
    float fiyat;
    Kiredi kiredei_bilgisi;
};
typedef struct Arac Araba;  /* typedef deyimini struct deyimi ile beraber kullanıldığında oluşturduğunuz yapıyı bir değişken türü 
                            olarak tanımlayıp o yapının çoğaltılmasını sağlar. Bu yapıdan değişken tanımlamak için tekrar struct 
                            deyiminin kullanılmasına gerek kalmaz.*/
int main()
{
    srand(time(0));
    int arac_sayisi;
    printf("Galerideki arac sayisi: ");
    scanf("%d",&arac_sayisi);
    Araba* arabaptr;
    arabaptr= (Araba*)malloc(arac_sayisi*sizeof(Araba));
    for (int i=0;i<arac_sayisi;i++) {
        printf ("%d. Aracin marka modeli: ", i+1); 
        scanf("%s",arabaptr[i].marka_model);
        printf ("%d. Aracin Model yili: ", i+1); 
        scanf("%d",&arabaptr[i].modelYili);
        printf ("%d. Aracin Kilometresi: ", i+1); 
        scanf("%d",&arabaptr[i].km);
        printf ("%d. Aracin Fiyati: ", i+1); 
        scanf("%f",&arabaptr[i].fiyat);
        printf("--------------------------------\n");
    }

    for (int i = 0; i < arac_sayisi; i++)
    {
        arabaptr[i].kiredei_bilgisi.oran = (rand() % 9 + 7)/100.0;
        arabaptr[i].kiredei_bilgisi.vadesayisi = rand()%49 + 12;
    }
    
    printf("\n------------ Galerideki Araclarin Bilgileri --------------\n");
    for (int i = 0; i < arac_sayisi; i++)
    {
        printf("Marka: %s\nModel Yili: %d\nKilometresi: %d\nFiyati: %0.2f\nKiredi Orani %.2f\nKiredi Vade Sayisi: %d Ay\n",
        arabaptr[i].marka_model,arabaptr[i].modelYili,arabaptr[i].km,arabaptr[i].fiyat,arabaptr[i].kiredei_bilgisi.oran,arabaptr[i].kiredei_bilgisi.vadesayisi);
        printf("--------------------------------\n");
    }
    
    return 0;
}
