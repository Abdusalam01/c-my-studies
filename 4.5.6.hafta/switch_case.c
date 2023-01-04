#include <stdio.h>
#include <stdlib.h>
/* switch...case bloğu
switch (değişken) {     switch--> tut anlamına gilir ve bir deişken tutar.
case sabit1:          case--> durum anlamına gelir.
deyim1                case'den sonra birden fazla deyim yazıla bilir.
break;                break; switch'ten çık anlamına gelir, her case'den sonra atılmak zorunda.
default:              default:--> değişken değeri herhangi bir sabite eşit değilse default sabitinin deyimi deyimd çalışır.         
deyimd;            
}                     swithch ten sonra bir {} açılır.
*/
int main()
{
    int plaka_kodu;
    printf("ilin plaka kodunu giriniz: ");
    scanf("%d",&plaka_kodu);
    switch(plaka_kodu){       // {} atıyoruz.
    case 6:     //değişken değeri 6 değerine eşitse Ankara çalıştırılır ve break kullanılarak bloktan çıkış yapılır.
       printf("Ankara\n");
       printf("turkiye'nin baskenti");   //birden fazla printf kullana biliriz.
        break;      
    case 34:        
       printf("Istanbul\n");
       break;
    case 35:
       printf("Izmir\n");               
       break;
    case 16:
       printf("Bursa\n");
       printf("Yasadigim sehir\n");
       break;
    default:    // değişken değeri herhangi bir sabite eşit değilse default sabitinin deyimi Tanimsiz plaka kodu deymi çalışır.
       printf("Tanimsiz plaka kodu!!!\n");
       break;
    }
    /************** switch-case Kullanım Hataları *************
    • break deyiminin kullanılmasının unutulması.
    • switch-case bloğundaki { } sembollerinin kullanımlarınınunutulması.
    • default deyiminin ve içeriğinin kullanımının unutulması.
    • Kontrol edilen değişken ile verilen sabitlerin farklı tipte olması.
    • int ve char veri türleri dışında değişken tanımlamaya çalışmak (double, string)
    */
    return 0;
}