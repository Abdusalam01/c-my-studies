#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ogrenci
{
    char isim[15];
    int yas;
    float ortalama;
};

void oku(struct ogrenci s[]) // ogrenci bilgisini okuyan fonkisyon
{
    printf("\n\n              OGRENCI BILGILERINI GIRINIZ\n--------------------------------------------------------------\n");
    for (int i = 1; i < 4; i++)
    {
        printf("[%d]. ogrencinin ismi: ",i);
        scanf("%s",s[i].isim);
        printf("[%d]. ogrencinin yasi: ",i);
        scanf("%d",&s[i].yas);
        printf("[%d]. ogrencinin ortalamasi: ",i);
        scanf("%f",&s[i].ortalama);
        printf("\n");
    }
}

int main()
{
    struct ogrenci sinif[4];
    float enbuyuk=0.0;
    char birinci[15];
    
    oku(sinif);  // sinif dizisini okuyalım

    /* 30 ogrenciden en yusek ortalamayı tutan ogrencinin ortalamasını ne adini saklayalım */
    for (int i = 1; i < 4; i++)
    {
        if ((sinif[i].ortalama)>enbuyuk)
        {
            enbuyuk=sinif[i].ortalama;
            strcpy(birinci,sinif[i].isim);
        }
        
    }
    printf("Sinif birincisi : %s\n",birinci);
    printf("Ortalamasi : %5.2f\n\n",enbuyuk);

    return 0;
}