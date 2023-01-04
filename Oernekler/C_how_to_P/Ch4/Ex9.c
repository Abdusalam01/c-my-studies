#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi;
    printf("Dizi eleman sayisini giriniz:  ");
    scanf("%d",&sayi);

    int dizi[sayi];
    
    for (int i = 0; i < sayi; i++)
    {
        scanf("%d",&dizi[i]);
    }
    int toplam = 0, ortalama = 0;
    for (int i = 0; i < sayi; i++)
    {
        toplam += dizi[i];
    }
    ortalama = (toplam / sayi);
    printf("Toplam: %d\nOrtalama: %d",toplam,ortalama);
    
    return 0;
}