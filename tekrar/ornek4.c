#include<stdio.h>
#include<string.h>
struct ogrenci_yapi
{
    char isim[15];
    int no;
    float ort;
};

int main()
{
    struct ogrenci_yapi sinif[10];
    float maks=0;
    char makisim[15];
    for (int i = 0; i < 2; i++) // ogrenci bilgilerinin okunmasi
    {
        printf("Ogrenci Adini Giriniz: ");
        scanf("%s",sinif[i].isim);
        printf("Ogrenci Numarasini Giriniz: ");
        scanf("%d",&sinif[i].no);
        printf("Ogrenci Ortalamasini Giriniz: ");
        scanf("%f",&sinif[i].ort);
    }
    printf("\n---------------------------------\n         KALAN OGRENCILER\n---------------------------------\n");
    for (int i = 0; i < 2; i++) // kalan ogrencileri bulma
    {
        if (sinif[i].ort<60)
            printf("%s    %.2f ortalamayla kaldi\n",sinif[i].isim,sinif[i].ort);
    }
    
    
    
    return 0;
}