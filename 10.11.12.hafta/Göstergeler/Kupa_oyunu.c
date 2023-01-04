#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int oyuncu1,oyuncu2,oyuncu3,oyuncu4,oyuncu5; // 5 tane oyuncu tanımlayın
    srand(time(0));
    // 5 tana oyuncunun cevaplarını rastgele olarak doldurum
    oyuncu1 = rand() % 100 + 1;
    oyuncu2 = rand() % 100 + 1;
    oyuncu3 = rand() % 100 + 1;
    oyuncu4 = rand() % 100 + 1;
    oyuncu5 = rand() % 100 + 1;
    // 5 tane oyuncunun rastgele olarak tanımlanan cevaplarını yazdırın
    printf("1 numarali oyuncunun tuttugu sayi : %d\n",oyuncu1);
    printf("2 numarali oyuncunun tuttugu sayi : %d\n",oyuncu2);
    printf("3 numarali oyuncunun tuttugu sayi : %d\n",oyuncu3);
    printf("4 numarali oyuncunun tuttugu sayi : %d\n",oyuncu4);
    printf("5 numarali oyuncunun tuttugu sayi : %d\n",oyuncu5);
    // oyunun kuralı : oyuncuların cevaplarının ortalaması bulunur ve ortalaması 0.8 ile çarpılır sonra çıkan sayı sonuc adlı degişekene atanır.
    float sonuc = 0; 
    sonuc = ((oyuncu1 + oyuncu2 + oyuncu3 + oyuncu4 + oyuncu5) / 5.0) * 0.8;
    // sonuc adlı değişkenin ekrana yazdırın.
    printf("\nSayilarin ortalamasinin 0.8 ile carpim sonucu : %.1f\n\n",sonuc);
    // sonuca en yakın cevabı veren kişiyi bulun
    int enyakin2 = 0, yakinlik2 = -1; 
    int enyakin = oyuncu1;
    double yakinlik = fabs(oyuncu1 - sonuc);
    for (int i = 0; i < 5; i++)
    {
        if (fabs(oyuncu2 - sonuc) < yakinlik){
            yakinlik = fabs(oyuncu2 - sonuc);
            enyakin = oyuncu2;
        }
        else if (fabs(oyuncu2 - sonuc) < yakinlik){
            yakinlik = fabs(oyuncu2 - sonuc);
            enyakin = oyuncu2;
        }
        else if (fabs(oyuncu4 - sonuc) < yakinlik){
            yakinlik = fabs(oyuncu4 - sonuc);
            enyakin = oyuncu4;
        }
        else if (fabs(oyuncu5 - sonuc) < yakinlik){
            yakinlik = fabs(oyuncu5 - sonuc);
            enyakin = oyuncu5;
        }
    }
    if (yakinlik2 == yakinlik)
        printf("Diger en yakin sayi = %d\n", enyakin2);
    printf("En yakin sayi = %d\n", enyakin);
    
    
    

    
    return 0;
}