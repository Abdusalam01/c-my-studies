#include <stdio.h>
#include <stdlib.h>

typedef struct ogrenci_data
{
    int no;
    char ad[15];
    int not;
}ogrenci;
ogrenci *ogrenciler;
int ogrenci_sayisi;

void dosyaYaz()
{
    printf("ogrenci bilgilerini giriniz: \n------------------------------------------------------------\n");

    for (int i = 0; i < ogrenci_sayisi; i++)
    {
        printf("%d. ogrenci No: ",i+1);
        scanf("%d",&ogrenciler[i].no);
        printf("%d. ogrenci Adi: ",i+1);
        scanf("%s",ogrenciler[i].ad);
        printf("%d. ogrenci Notu: ",i+1);
        scanf("%d",&ogrenciler[i].not);
        printf("\n");
    }

    FILE *fptr=fopen("ogrenci_bilgi.txt","w");
    if (fptr==NULL)
        printf("dosya acilamadi");
    else
        printf("DOSYA OLUSTU\n");

    for (int i = 0; i < ogrenci_sayisi; i++)
    {
        fprintf(fptr,"%d\t%s\t%d\n",ogrenciler[i].no,ogrenciler[i].ad,ogrenciler[i].not);
    }
    printf("OGRENCI BILGILERI KAYDEDILDI...\n");
    fclose(fptr);
    
}
void dosyaOku()
{
    printf("\n\nOGRENCİ BILGILERI DOSYADAN OKUNUYOR\n\n");
    printf("OGRENCİ BILGILERI\n-----------------------------------\n");

    int numara,notu;
    char ismi[51];

    FILE *fptr=fopen("ogrenci_bilgi.txt","r");

    if (fptr==NULL)
        printf("dosya bulunamadi\n");
    else{
        for (int i = 0; i < ogrenci_sayisi; i++)
        {
            fscanf(fptr,"%d\t%s\t%d\n",&numara,ismi,&notu);
            printf("No: %d\nAd: %s\nNot: %d\n",numara,ismi,notu);
            printf("\n");
        }
    }
    fclose(fptr);
}
int main()
{
    printf("kac ogrenci var: ");
    scanf("%d",&ogrenci_sayisi);

    ogrenciler=(ogrenci*)malloc(ogrenci_sayisi*sizeof(ogrenci));

    dosyaYaz();

    dosyaOku();


    return 0;
}