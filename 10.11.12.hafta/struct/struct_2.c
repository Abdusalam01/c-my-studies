#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*      ******  struct içerisinde struct Kullanımı      ******     */

typedef struct
{
    
    int vize_notu[3];
    int quiz_notu[3];
    int final;
}ogrenciNot;
typedef struct 
{
    char telefon[15];
    char eposta[50];
}Iletisim;
typedef struct 
{
    int No;
    int ogrenci_no;
    char ad[30];
    char soyad[30];
    char cinsiyet[10];
    ogrenciNot notlar; // ogrenciNot struct deyminin çağırılması. ve notlar degişkenine tanimlanması
    Iletisim ogriletisim; // Iletisim struct deyminin çağırılması. ve ogriletisim değişkenine tanımlanması.
}ogrenci;


int main()
{
    ogrenci ogr; // ogrenci struct deyminin ogr degiskenine tanimlanması.
    ogr.No=213603;
    strcpy(ogr.ogriletisim.eposta,"turan2022@gmail.com");
    strcpy(ogr.ogriletisim.telefon,"05050050404");
    ogr.notlar.vize_notu[1]=78; // ogr fonkisyonun içindeki notlar degişkeni içinkedi vizenotu[1] elemanı.
    ogr.notlar.vize_notu[2]=84;
    ogr.notlar.quiz_notu[1]=66;
    ogr.notlar.quiz_notu[2]=90;
    ogr.notlar.final=83;
    
    printf("\n Telefon No: %s \n E-Posta: %s\n",ogr.ogriletisim.telefon,ogr.ogriletisim.eposta);

    printf(" Vize[1]= %d\n Vize[2]= %d\n Quiz[1]= %d\n Quiz[2]= %d\n Final  = %d\n",ogr.notlar.vize_notu[1],ogr.notlar.vize_notu[2],
                                                                                  ogr.notlar.quiz_notu[1],ogr.notlar.quiz_notu[2],
                                                                                  ogr.notlar.final
    );
    
    
    return 0;
}
