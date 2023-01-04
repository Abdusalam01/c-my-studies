#include <stdio.h>
#include <stdlib.h>

int main() {
    char metin[100];
    char ch;
    int adet=0, i;

    printf("Metini giriniz: "); gets( metin );
    printf("Harfi giirniz: "); scanf("%c",&ch);
    
    for ( i = 0; metin[i] != '\0'; i++)
    {
        if (metin[i] == ch)
            adet++;
    }
    printf("%c harfinden %d adet vardir.",ch,adet);
    
    return 0;
}