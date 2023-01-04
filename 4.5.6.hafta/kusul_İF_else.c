#include <stdio.h>
#include <stdlib.h>
// kuşul---->  sonucu yanlış veya doğru oaln bir ifadeye "kuşul" denir
/*  if (kuşul)
        {kuşul doğru ise işlem 1}
     else
        {kuşul yanlış ise işlem 2}
    ***** Örnek ****
        if (sayi<0)
     printf("Negatif sayı girdiniz\n");
        else 
         if (sayi > 0)
          printf("Pozitif bir sayı girdiniz\n");
         else
          printf("Sıfır sayısını girdiniz\n");
          */

int main()
{
    int ogrenci_not;
    printf("notu giriniz: ");
    scanf("%d", &ogrenci_not);

    if (ogrenci_not>60 && ogrenci_not<=65)
        printf("Harif Karsiligi:DD");
    else if (ogrenci_not>65 && ogrenci_not<=70)    // iç içe if...else Blokları
        printf("Harif Karsiligi:DC");
    else if (ogrenci_not>70 && ogrenci_not<=75)
        printf("Harif Karsiligi:CC");
    else if (ogrenci_not>75 && ogrenci_not<=80)
        printf("Harif Karsiligi:CB");
    else if (ogrenci_not>80 && ogrenci_not<=85)
        printf("Harif Karsiligi:BB");
    else if (ogrenci_not>85 && ogrenci_not<=90)
        printf("Harif Karsiligi:BA");
    else if (ogrenci_not>90 && ogrenci_not<=100)
        printf("Harif Karsiligi:AA");
    else
    printf("uygun deger girmediniz!");

    /*Örnek: if ((ögrenci_no==12345) && (ögrenci_isim="Veli"))
    • Bu örnekte en hızlı şekilde YANLIŞ (false) sonucu almak istiyorsak,
     en çok seçilebilir olan koşulu en sola yani başlangıca koymamız gerekmektedir.*/
    
    // ***********   if-else Kullanım Hataları    ***********
    //Hata-1     if sayi==10          //Söz dizimi hatası    doğrusu if (sayi==10)
    //Hata-2     if (sayi==10);       //Boş ifade            doğrusu if (sayi==10)
    //Hata-3     if (10<=sayi<=50)    //Mantıksal Hata       doğrusu if ((sayi>=10) && (sayi<=50))
    //Hata 4     if (sayi=10)         //Mantıksal Hata       doğrusu if (sayi==10)

    /* ***********   ? Karşılaştırma Operatörü    ***********
    (koşul) ? deyim1 : deyim2;
    • Örnek:
    x = ( a > b ) ? a : b;
• Yukarıdaki ifadede koşul a'nın b'den büyük olmasıdır.
• Eğer olumluysa x adlı değişkene a değeri atanır,
• Olumsuzsa x adlı değişkene b değeri atanır.
• Örneğin if-else bloğu ile gösterimi:
 if (a > b)
    x = a;
    else
    x = b;

    Örnek
    x = ( sayi < 10 ) ? printf("yazi1") : printf("yazi2");
    */
     return 0;
}
