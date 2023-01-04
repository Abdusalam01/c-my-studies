#include <stdio.h>
#include <stdlib.h>

int main() {
    int dizi[10] = {1, 4, 1, 5, 4, 6, -2, -4, -1, -3};
    int toplam = 0;

    for (int i = 0; i < 10; i++)
    {
        toplam += dizi[i];
    }
    printf("Tum elemanlarinin toplami: %d\n",toplam);

    int p = 0;
    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] > 0)
        {
            p += dizi[i];
        }
    }
    printf("Pozitif elemanlarin toplami: %d\n",p);

    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] < 0)
        {
            n += dizi[i];
        }
    }
    printf("Negatif elemanlarin toplami: %d\n",n);

    int enKucuk = 1000;
    for (int i = 0; i < 10; i++)
    {
        if (enKucuk > dizi[i])
        {
            enKucuk = dizi[i];
        }
    }
    printf("Dizideki en kucuk sayi: %d\n",enKucuk);
    
    printf("Tek Cift siralamasi: ");
    for (int i = 0; i < 10; i++)
    {
        if (dizi[i]%2 != 0)
        {
            printf("%d  ",dizi[i]);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (dizi[i]%2 == 0)
        {
            printf("%d  ",dizi[i]);
        }
    }
    
    
    return 0;
}