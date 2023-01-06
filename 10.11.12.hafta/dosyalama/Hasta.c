/* Bu programda bir dosya olusturup kullanici tarafindan girilen hasta bilgilerini dosyaya yazma islemi yapiyoruz.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct      // hatamizin bilgilerini tutan struct'kimiz
{   
    int hasta_no;
    char hasta_adi[25];
    char hasta_soyadi[25];
    char cinsiyet[10];
    int yas;
    float boy;
}hasta;

int hasta_sayisi;
void dosya_yaz();   // Bir dosya olusturup o dosyaya veri yazma islemi yapan fonkisyonumuz.

int main() {  // main fonkisyonumuz
    printf("Hasta sayisini giriniz: ");
    scanf("%d",&hasta_sayisi);      
    dosya_yaz();


    return 0;
}

void dosya_yaz() {
    hasta hastalar[hasta_sayisi];       // hasta_sayisi kadar bir dizi olusturur
    for (int i = 0; i < hasta_sayisi; i++)          // kullanicidan hastalarin bilgilerini alan for dongumuz.
    {
        printf("%d. Hastanin numarasi giriniz: ",i + 1);        scanf("%d",&hastalar[i].hasta_no);
        printf("%d. Hastanin adini giriniz: ",i + 1);           scanf("%s",hastalar[i].hasta_adi);
        printf("%d. Hastanin soyadi giriniz: ",i + 1);          scanf("%s",hastalar[i].hasta_soyadi);
        printf("%d. Hastanin Cinsiyetini giriniz: ",i + 1);     scanf("%s",hastalar[i].cinsiyet);
        printf("%d. Hastanin Yasini giriniz: ",i + 1);          scanf("%d",&hastalar[i].yas);
        printf("%d. Hastanin boyunu giriniz: ",i + 1);          scanf("%f",&hastalar[i].boy);
        printf("\n---------------------------------------\n");
    }
    FILE *dosya;  
    if ((dosya = fopen("Hastalar.txt","w")) == NULL)      // Dosya olustur ve Dosyanin olusup olusmadigini kontrol et.
    {
        printf("Dosya olusturulamadi!!!\n");
        exit(1);
    }
    // dosyaya veri yazma islemleri.
    fprintf(dosya,"%s\n","\t\t\t\t\t---------------- HASTALARIN BILGILERI ----------------");
    for (int i = 0; i < hasta_sayisi; i++)  // Tum hastalarimizin tum bilgilerini dosyaya yazan dongumuz.
    {
        fprintf(dosya,"Hasta_No: %d\nHasta_Adi: %s\nHasta_Soyadi: %s\nHasta_Cinsiyeti: %s\nHasta_Yasi: %d\nHasta_Boyu: %.2f\n",  
                        hastalar[i].hasta_no, hastalar[i].hasta_adi, hastalar[i].hasta_soyadi, hastalar[i].cinsiyet, hastalar[i].yas, hastalar[i].boy);
        fprintf(dosya,"\n----------------------------------\n");
    }
    printf("HASTALARIN BILGILERI KAYDEDILDI.\n");
    
    fclose(dosya);  // Dosyayi kapat.

}

