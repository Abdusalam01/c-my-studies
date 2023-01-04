#include<stdio.h>
#include<stdlib.h>
struct okul_yapisi
{
    char ismi[50];
    int ogrenci_sayisi,ogretmen_sayisi;
    char sehir[15];

};
typedef struct okul_yapisi okul;

int main()
{
    okul a;
    okul *b;
    okul c[10];

    printf("Okulun Adi: ");
    scanf("%s",a.ismi);
    printf("Okulun Bulundugu Sehir : ");
    scanf("%s",a.sehir);
    printf("Okulun Ogretmen Sayisi : ");
    scanf("%d",&a.ogretmen_sayisi);
    printf("Okulun ogrenci sayisi : ");
    scanf("%d",&a.ogrenci_sayisi);

    b=&a;
    printf("\n\nOkulun Adi : %s\n",b->ismi);
    printf("Okulun Bulundugu Sehir : %s\n",b->sehir);
    printf("Okulun Ogretmen Sayisi : %d\n",b->ogretmen_sayisi);
    printf("Okulun ogrenci sayisi : %d\n",b->ogrenci_sayisi);

    
    getchar();
    
    return 0;
}