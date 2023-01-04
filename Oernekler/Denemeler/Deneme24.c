// Onluk tabandaki sayiyi ikilik tabana dönüştürme
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int sayi, ikilik;
    printf("Sayi giriniz: ");   scanf("%d",&sayi);
    for (int i = 7; i >= 0; i--)
    {
        ikilik = sayi >> i;
        if (ikilik & 1)
            printf(" 1");
        else 
            printf(" 0");
        
    }
    
    
    return 0;
}