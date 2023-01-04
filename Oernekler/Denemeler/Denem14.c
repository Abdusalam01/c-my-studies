#include <stdio.h>
#include <stdlib.h>

int main() {

    int dizi[100];

    for (int i = 0; i < 100; i++)
    {
        dizi[i] = i*2;
    }
    int sayi = 0, indis = -1;
    printf("Aranacak sayiyi giriniz: ");    scanf("%d",&sayi);
    for (int i = 0; i < 100; i++)
    {
        if (sayi == dizi[i])
        {
            indis = i;
            printf("\nAranan sayi dizinin %d. indisinde bulundu\n",indis);
            break;
        }
    }
    if (indis == -1)
    {
        printf("Aranan sayi dizide bulunamadi");
    }
    
    
    return 0;
}