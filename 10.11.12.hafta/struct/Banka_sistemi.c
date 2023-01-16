#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

typedef struct 
{
    int para_cek;
    int para_yatit;
} Transfer;

typedef struct 
{
    int hesap_numarasi;
    char sifre[50];
} Giris;

typedef struct Arsiv
{
    Giris giris;
    char ad_soyad[50];
    int hesap_no;
    float bakiye;
    Transfer islemler;
    struct Arsiv *ptr;

} Banka;

void musteri_bilgileri();

int main(){
    
    musteri_bilgileri();

    return 0;
}



void musteri_bilgileri(){

    srand(time(0));
    
    Banka musteri[3];

    musteri[0].giris.hesap_numarasi = 1;
    strcpy(musteri[0].giris.sifre,"a");
    strcpy(musteri[0].ad_soyad,"Fatma Demir");
    musteri[0].hesap_no = 1;
    musteri[0].bakiye = (rand() % 30001 + 5000)/1.0;

    musteri[1].giris.hesap_numarasi = 2;   // hesabına giris yapmasi icin hesap numarasini kullanici adi olarak kullansin
    strcpy(musteri[1].giris.sifre,"b");
    strcpy(musteri[1].ad_soyad,"Yakup Arslan");
    musteri[1].hesap_no = 2;
    musteri[1].bakiye = (rand() % 30001 + 5000)/1.0;

    musteri[2].giris.hesap_numarasi = 3;   // hesabına giris yapmasi icin hesap numarasini kullanici adi olarak kullansin
    strcpy(musteri[2].giris.sifre,"c");
    strcpy(musteri[2].ad_soyad,"Ali Baykara");
    musteri[2].hesap_no = 3;
    musteri[2].bakiye = (rand() % 30000 + 5000)/1.0;

    musteri[0].ptr = &musteri[1];
    musteri[1].ptr = &musteri[2];
    musteri[2].ptr = NULL;
    
    Giris kullanici;
    printf("\n\n------------ Hesabiniza Giris Yapin --------------\n\n");

    printf("Hesap Numaraniz: ");
    scanf("%d",&kullanici.hesap_numarasi);
    printf("Sifreniz: ");
    scanf("%s",kullanici.sifre);
    printf("\n\n");

    int islem, tutar;
    
    for (int i = 0; i < 3; i++)
    {
        if ((kullanici.hesap_numarasi == musteri[i].giris.hesap_numarasi) && (strcmp(kullanici.sifre,musteri[i].giris.sifre) == 0))
        {
            printf("--- Hesap Bilgileriniz ---\n\n");
            printf("Hesap sahibi: %s\n",musteri[i].ad_soyad);
            printf("Bakiyeniz: %.2f\n\n",musteri[i].bakiye);

            printf("->Para cekmek icin 1'i,\n->para yatirmak icin 2'yi giriniz\n");
            scanf("%d",&islem);

            if (islem == 1)
            {
                printf("Cekmek istediginiz tutari giriniz: ");      scanf("%d",&tutar);
                if (musteri[i].bakiye > tutar)
                {
                    musteri[i].bakiye -= tutar;
                }
            }
            else if (islem == 2)
            {
                printf("Yatirmak istediginiz tutari giriniz: ");      scanf("%d",&tutar);
                musteri[i].bakiye += tutar;
            }
            else
                printf("Gecersiz Giris yaptiniz, lutfen tekrar deneyin!!!");
            
            printf("Isleminiz devam ediyor lutfen bekleyin...\n");          sleep(2);
            printf("Isleminiz isleminiz basariyla tamamlandandi...\n");     sleep(1);
            printf("-> Kalan bakiyeniz: %.2f\n",musteri[i].bakiye);         sleep(2);
            printf("Kartinizi almayi unutmayiniz\n");         
            break;
        }

        if ((kullanici.hesap_numarasi != musteri[i].giris.hesap_numarasi) && (strcmp(kullanici.sifre,musteri[i].giris.sifre) == 0))
        {
            printf("Bilgilerinizi yanlis girdiniz, Lutfen bilgilerinizi kontrol ediniz!!!\n");    break;
        }
        if ((kullanici.hesap_numarasi == musteri[i].giris.hesap_numarasi) && (strcmp(kullanici.sifre,musteri[i].giris.sifre) != 0))
        {
            printf("Yanlis Sifre girdiniz, Lutfen bilgilerinizi kontrol ediniz!!!\n");    break;
        }
    }


    printf("\n\n%s\n%.2f₺\n\n",musteri[0].ptr->ptr->ad_soyad,musteri[0].ptr->ptr->bakiye);
}
