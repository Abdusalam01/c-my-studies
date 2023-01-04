#include<stdio.h>
#include<stdlib.h>
struct sinavlar
{
    char isim[10];
    float arasinav[3];
    float final;
};

int main()
{
    struct sinavlar sinav;
    float toplam=0,ort=0;
    
    printf("AD: ");
    scanf("%s",sinav.isim);
    printf("Ara sinav notu: ");
    scanf("%f",&sinav.arasinav[0]);
    printf("Ara sinav notu: ");
    scanf("%f",&sinav.arasinav[1]);
    printf("Ara sinav notu: ");
    scanf("%f",&sinav.arasinav[2]);
    printf("Ara Final sinav notu: ");
    scanf("%f",&sinav.final);

    toplam+=sinav.arasinav[1]*0.2+sinav.arasinav[0]*0.2+sinav.arasinav[2]*0.2;
    ort=toplam+sinav.final*0.4;
    printf("%s Isimli ogrencinin ortalamasi : %.2f",sinav.isim,ort);
    
    
    
    return 0;
}