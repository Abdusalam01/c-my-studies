#include <stdio.h>
#include <stdlib.h>
/*        *** struct Deyimi ***                 */
/* struct yapı_adı {veri_tipi değişken_ismi1; 
                    veri_tipi değişken_ismi2;
                           .
                           .
                           .
                    veri_tipi değişken_ismiN };   */

struct ogrenci
{
    int ogrenci_no;
    char ad[30];
    char soyad[30];
    char cinsiyet[10];
    char fakulteBolum[60];
    float not_ortalama;
};
void ogrencibilgisiyazdir (struct ogrenci ogrenci_bilgisi){

    printf("\n\n*******    Veri Okuma  *********\n\n");
    printf(" No: %d\n Ad: %s\n Soyad: %s\n Cinsiyet: %s\n Fakulte/Bolum: %s\n Not Ortalamasi: %0.2f\n",
            ogrenci_bilgisi.ogrenci_no,
            ogrenci_bilgisi.ad,
            ogrenci_bilgisi.soyad,
            ogrenci_bilgisi.cinsiyet,
            ogrenci_bilgisi.fakulteBolum,
            ogrenci_bilgisi.not_ortalama);

}
int main()
{
    struct ogrenci ogrenci_bilgisi;
    printf("\n*******    Veri Girisi   *********\n");
    printf("Ogrenci Numarasi: ");
    scanf("%d",&ogrenci_bilgisi.ogrenci_no);
    printf("Ogrenci Adi: ");
    scanf("%s",ogrenci_bilgisi.ad);
    printf("Ogrenci Soyadi: ");
    scanf("%s",ogrenci_bilgisi.soyad);
    printf("Ogrenci Cinsiyeti: ");
    scanf("%s",ogrenci_bilgisi.cinsiyet);
    printf("Ogrenci Fakulte/Bolum: ");
    scanf("%s",ogrenci_bilgisi.fakulteBolum);
    printf("Ogrenci Not Ortalamasi: ");
    scanf("%f",&ogrenci_bilgisi.not_ortalama);

    ogrencibilgisiyazdir (ogrenci_bilgisi);
    return 0;


    /*    ******  Birlikler (Union)    ******    
    
    • Butipte bildirim yapılırken struct yerine union yazılır.

    union test {
    int x;
    char y[10]; }p
    
    • Bu tanıma göre x tamsayısı için bellekte 4 baytlık yer ayrılmaktadır.
    • Birlik içinde yer alan y değişkeni için 10 baytlık yer ayrılmıştır.
    • Bu durumda, birlik için en fazla 10 baytlık bir yer ayrılmıştır. 
      Ayrılan bu alan, birliğin her bir alanı tarafından ortak kullanılır.
*/

}