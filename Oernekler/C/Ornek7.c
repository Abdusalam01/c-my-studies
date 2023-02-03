#include <stdio.h>
#include <stdlib.h>

// REKÜRSIF ( ÖZYINELI ) fonksiyonlar
// 1 den N e kadar olan saylarn stralanmas?
// 1 den N e kadar olan sayrlarn toplanmas?
// faktöriyel hesaplama

void yazdir(int n){
    if(n != 0){
        yazdir(n-1);
        printf("%d ",n);
    }   
}

int toplam(int n){
    if(n == 0)
        return 0;
    return n + toplam(n-1);
}

int faktoryel(int n) {
    if(n == 1)
        return n;

    return n * faktoryel(n - 1);
}


int main(int argc, char *argv[]) {
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);

    yazdir(sayi);
    printf("\n");
    int top = toplam(sayi);

    printf("Sayilerin toplami: %d",top);

    printf("\n");
    int faktor = faktoryel(sayi);

    printf("Sayilerin faktoryeli: %d",faktor);

    return 0;
}