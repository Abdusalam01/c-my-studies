#include <stdio.h>
#include <stdlib.h>

int main() {

    int sayi;
    printf("Sayi giriniz: ");   scanf("%d",&sayi);

    int buyuk = 0;

    while (sayi > 0)
    {
        int gecici = sayi % 10;
        if(buyuk < gecici)
            buyuk = gecici;

        sayi = sayi / 10;
    }
    
    printf("En buyuk rakam: %d",buyuk);

    
    return 0;
}