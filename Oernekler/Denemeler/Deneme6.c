#include <stdio.h>
#include <string.h>

int main() {
    char metin[100];
    int uzunluk = 0,i;

    printf("Metini giriniz: ");    gets(metin);

    uzunluk = strlen(metin);

    for ( i = uzunluk; i >= 0 ; i--)
    {
        printf("%c",metin[i]);
    }
    
    return 0;
}