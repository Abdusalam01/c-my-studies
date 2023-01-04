#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int dizi[] = {5,23,52,12,6,2,3,64,34,53};
    int i,j;
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < i; j++)
        {
            if (dizi[i] < dizi[j]){
                int gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d  ",dizi[i]);
    }

    int enBuyuk,enKucuk;
    enBuyuk = INT_MIN;
    enKucuk = INT_MAX;

    for ( i = 0; i < 10; i++)
    {
        if(dizi[i] > enBuyuk) {
            enBuyuk = dizi[i];
        }
        if (dizi[i] < enKucuk){
            enKucuk = dizi[i];
        }
        
    }

    printf("\nEn buyuk sayi: %d\nEn kucuk sayi: %d\n",enBuyuk,enKucuk);
    
    int ortalama = 0,toplam = 0;
    
    for ( i = 0; i < 10; i++)
    {
        toplam += dizi[i];
        ortalama = toplam/10;
    }
    printf("Sayilarin toplami: %d\n",toplam);
    printf("Sayilarin ortalamasi: %d\n",ortalama);

    int tek = 0, cift = 0;
    for ( i = 0; i < 10; i++)
    {
        if (dizi[i]%2 == 0)
        {
            cift++;
        }
        else
            tek++;
        
    }
    printf("Dizideki cift sayilarin sayisi: %d\n",cift);
    printf("Dizideki tek sayilarin sayisi: %d\n",tek);

    

    
    
    return 0;
}