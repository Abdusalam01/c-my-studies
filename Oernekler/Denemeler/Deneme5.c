#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char metin[100];
    int uzunluk;

    printf("Metini giriniz: ");    gets(metin);

    uzunluk = strlen(metin);
    printf("Girilen metinin %d karakterten olusmakta.",uzunluk);
    
    

    return 0;
}