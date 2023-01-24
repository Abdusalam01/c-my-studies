#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void T_skoru_hesapla(double ortalama, double HBN[ ], int N, double std);
double standart_sapma_hesapla(double ortalama, double HBN[ ], int N);

int main() {

    double ort = 32.44;

    double hbn[1];
    hbn[0] = 40 * 0.4 + 25 * 0.6;

    double std = standart_sapma_hesapla(ort,hbn,1);
    T_skoru_hesapla(ort,hbn,1,std);




    return 0;
}

double standart_sapma_hesapla(double ortalama, double HBN[ ], int N) {

    double std = 0;
    float toplam = 0;
    for (int i = 1; i <= N; i++) // standart sapmayı hesaplayan for döngümüz
    {
        toplam += pow((HBN[i] - ortalama), 2);
    }
    std = sqrt(toplam / N);
    printf("Standart sapma: %.2lf\n", std);

    if (ortalama > 80 && ortalama <= 100)           printf("Sinifin Duzeyi: Ustun basari");
    else if (ortalama > 70 && ortalama <= 80)       printf("Sinifin Duzeyi: Mukemmel");
    else if (ortalama > 62.5 && ortalama <= 70)     printf("Sinifin Duzeyi: Cok iyi");
    else if (ortalama > 57.5 && ortalama <= 62.5)   printf("Sinifin Duzeyi: iyi");
    else if (ortalama > 52.5 && ortalama <= 57.5)   printf("Sinifin Duzeyi: Ortanin ustu");
    else if (ortalama > 47.5 && ortalama <= 52.5)   printf("Sinifin Duzeyi: Orta");
    else if (ortalama > 42.5 && ortalama <= 47.5)   printf("Sinifin Duzeyi: Zayif");
    else if (ortalama <= 42.5)                      printf("Sinifin Duzeyi: Kotu");

    
    return std;
}


void T_skoru_hesapla(double ortalama, double HBN[ ], int N, double std) {
    double T_skoru[N];
    
    for (int i = 0; i < N; i++)
    {
        T_skoru[i] = 60 + 10 * ((HBN[i] - ortalama)/std);
    }
    printf("\n\n");  
    // ogrnecinin harf notunu hesaplayın
    char *harf_notu[N];

    for (int i = 0; i < N; i++)
    {
        if ((ortalama > 80 && ortalama <= 100) && (HBN[i] < 32))                                harf_notu[i] = "FF";   
        else if ((ortalama > 80 && ortalama <= 100) && (HBN[i] > 32 && HBN[i] <= 36.99))        harf_notu[i] = "FD";   
        else if ((ortalama > 80 && ortalama <= 100) && (HBN[i] > 37 && HBN[i] <= 41.99))        harf_notu[i] = "DD";   
        else if ((ortalama > 80 && ortalama <= 100) && (HBN[i] > 42 && HBN[i] <= 46.99))        harf_notu[i] = "DC";   
        else if ((ortalama > 80 && ortalama <= 100) && (HBN[i] > 47 && HBN[i] <= 51.99))        harf_notu[i] = "CC";   
        else if ((ortalama > 80 && ortalama <= 100) && (HBN[i] > 52 && HBN[i] <= 56.99))        harf_notu[i] = "CB";  
        else if ((ortalama > 80 && ortalama <= 100) && (HBN[i] > 57 && HBN[i] <= 61.99))        harf_notu[i] = "BB";   
        else if ((ortalama > 80 && ortalama <= 100) && (HBN[i] > 62 && HBN[i] <= 66.99))        harf_notu[i] = "BA";   
        else if ((ortalama > 80 && ortalama <= 100) && (HBN[i] > 67))                           harf_notu[i] = "AA";  

        if ((ortalama > 70 && ortalama <= 80) && (HBN[i] < 34))                                 harf_notu[i] = "FF";  
        else if ((ortalama > 70 && ortalama <= 80) && (HBN[i] > 34 && HBN[i] <= 38.99))         harf_notu[i] = "FD";   
        else if ((ortalama > 70 && ortalama <= 80) && (HBN[i] > 39 && HBN[i] <= 43.99))         harf_notu[i] = "DD";      
        else if ((ortalama > 70 && ortalama <= 80) && (HBN[i] > 44 && HBN[i] <= 48.99))         harf_notu[i] = "DC";   
        else if ((ortalama > 70 && ortalama <= 80) && (HBN[i] > 49 && HBN[i] <= 53.99))         harf_notu[i] = "CC";   
        else if ((ortalama > 70 && ortalama <= 80) && (HBN[i] > 54 && HBN[i] <= 58.99))         harf_notu[i] = "CB";  
        else if ((ortalama > 70 && ortalama <= 80) && (HBN[i] > 59 && HBN[i] <= 63.99))         harf_notu[i] = "BB";   
        else if ((ortalama > 70 && ortalama <= 80) && (HBN[i] > 64 && HBN[i] <= 68.99))         harf_notu[i] = "BA";   
        else if ((ortalama > 70 && ortalama <= 80) && (HBN[i] > 69))                            harf_notu[i] = "AA";   

        if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] < 36))                                 harf_notu[i] = "FF";  
        else if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] > 36 && HBN[i] <= 40.99))         harf_notu[i] = "FD";   
        else if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] > 41 && HBN[i] <= 45.99))         harf_notu[i] = "DD";      
        else if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] > 46 && HBN[i] <= 50.99))         harf_notu[i] = "DC";   
        else if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] > 51 && HBN[i] <= 55.99))         harf_notu[i] = "CC";   
        else if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] > 56 && HBN[i] <= 60.99))         harf_notu[i] = "CB";  
        else if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] > 61 && HBN[i] <= 65.99))         harf_notu[i] = "BB";   
        else if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] > 66 && HBN[i] <= 70.99))         harf_notu[i] = "BA";   
        else if ((ortalama > 62.5 && ortalama <= 70) && (HBN[i] > 71))                            harf_notu[i] = "AA";   

        if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] < 38))                                 harf_notu[i] = "FF";  
        else if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] > 38 && HBN[i] <= 42.99))         harf_notu[i] = "FD";   
        else if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] > 43 && HBN[i] <= 47.99))         harf_notu[i] = "DD";      
        else if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] > 48 && HBN[i] <= 52.99))         harf_notu[i] = "DC";   
        else if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] > 53 && HBN[i] <= 57.99))         harf_notu[i] = "CC";   
        else if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] > 58 && HBN[i] <= 62.99))         harf_notu[i] = "CB";  
        else if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] > 63 && HBN[i] <= 67.99))         harf_notu[i] = "BB";   
        else if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] > 68 && HBN[i] <= 72.99))         harf_notu[i] = "BA";   
        else if ((ortalama > 57.5 && ortalama <= 62.5) && (HBN[i] > 73))                            harf_notu[i] = "AA"; 

        if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] < 40))                                 harf_notu[i] = "FF";  
        else if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] > 40 && HBN[i] <= 44.99))         harf_notu[i] = "FD";   
        else if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] > 45 && HBN[i] <= 49.99))         harf_notu[i] = "DD";      
        else if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] > 50 && HBN[i] <= 54.99))         harf_notu[i] = "DC";   
        else if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] > 55 && HBN[i] <= 59.99))         harf_notu[i] = "CC";   
        else if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] > 60 && HBN[i] <= 64.99))         harf_notu[i] = "CB";  
        else if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] > 65 && HBN[i] <= 69.99))         harf_notu[i] = "BB";   
        else if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] > 70 && HBN[i] <= 74.99))         harf_notu[i] = "BA";   
        else if ((ortalama > 52.5 && ortalama <= 57.5) && (HBN[i] > 75))                            harf_notu[i] = "AA"; 

        if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] < 42))                                 harf_notu[i] = "FF";  
        else if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] > 42 && HBN[i] <= 46.99))         harf_notu[i] = "FD";   
        else if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] > 47 && HBN[i] <= 51.99))         harf_notu[i] = "DD";      
        else if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] > 52 && HBN[i] <= 56.99))         harf_notu[i] = "DC";   
        else if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] > 57 && HBN[i] <= 61.99))         harf_notu[i] = "CC";   
        else if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] > 62 && HBN[i] <= 66.99))         harf_notu[i] = "CB";  
        else if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] > 67 && HBN[i] <= 71.99))         harf_notu[i] = "BB";   
        else if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] > 72 && HBN[i] <= 76.99))         harf_notu[i] = "BA";   
        else if ((ortalama > 47.5 && ortalama <= 52.5) && (HBN[i] > 77))                            harf_notu[i] = "AA";  

        if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] < 44))                                 harf_notu[i] = "FF";  
        else if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] > 44 && HBN[i] <= 48.99))         harf_notu[i] = "FD";   
        else if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] > 49 && HBN[i] <= 53.99))         harf_notu[i] = "DD";      
        else if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] > 54 && HBN[i] <= 58.99))         harf_notu[i] = "DC";   
        else if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] > 59 && HBN[i] <= 63.99))         harf_notu[i] = "CC";   
        else if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] > 64 && HBN[i] <= 68.99))         harf_notu[i] = "CB";  
        else if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] > 69 && HBN[i] <= 73.99))         harf_notu[i] = "BB";   
        else if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] > 74 && HBN[i] <= 78.99))         harf_notu[i] = "BA";   
        else if ((ortalama > 42.5 && ortalama <= 47.5) && (HBN[i] > 79))                            harf_notu[i] = "AA";

        if ((ortalama <= 42.5) && (HBN[i] < 46))                                                    harf_notu[i] = "FF";  
        else if ((ortalama <= 42.5) && (HBN[i] > 46 && HBN[i] <= 50.99))                            harf_notu[i] = "FD";   
        else if ((ortalama <= 42.5) && (HBN[i] > 51 && HBN[i] <= 55.99))                            harf_notu[i] = "DD";      
        else if ((ortalama <= 42.5) && (HBN[i] > 56 && HBN[i] <= 60.99))                            harf_notu[i] = "DC";   
        else if ((ortalama <= 42.5) && (HBN[i] > 61 && HBN[i] <= 65.99))                            harf_notu[i] = "CC";   
        else if ((ortalama <= 42.5) && (HBN[i] > 66 && HBN[i] <= 70.99))                            harf_notu[i] = "CB";  
        else if ((ortalama <= 42.5) && (HBN[i] > 71 && HBN[i] <= 75.99))                            harf_notu[i] = "BB";   
        else if ((ortalama <= 42.5) && (HBN[i] > 76 && HBN[i] <= 80.99))                            harf_notu[i] = "BA";   
        else if ((ortalama <= 42.5) && (HBN[i] > 81))                                               harf_notu[i] = "AA";
        
    }
    printf("Ogrenci notlari: \n");  // ogrencinin Ham başarı notunu yazdirin.
    for (int i = 0; i < N; i++)
    {
        printf("%03d. Ogrencinin HBN: %.2f,\tT_skoru: %.2lf, \tHarf notu: %s\n",i,HBN[i],T_skoru[i],harf_notu[i]);
    }
}