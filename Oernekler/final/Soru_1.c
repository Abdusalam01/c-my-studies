#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 20
#define KAYIT_SAYISI 5

typedef struct 
{
    char ad[LIMIT + 1];
    char soyad[LIMIT + 1];
} Kayit;


void uret(char *metin) {
    int uzunluk;
    int i = 0;
    uzunluk = rand() % LIMIT + 1;

    for (i = 0; i < uzunluk; i++)
    {
        metin[i] = rand() %26 + 'A';
        
    }
    metin[i] = '\0';
    
}


int main() {
    srand(time(0));

    Kayit kayitlar[KAYIT_SAYISI];

    for (int i = 0; i < KAYIT_SAYISI; i++)
    {
        uret(kayitlar[i].ad);
        uret(kayitlar[i].soyad);
        printf("Kayit%2d\nAd: %s\nSoyad: %s\n\n", i+1, kayitlar[i].ad, kayitlar[i].soyad);
    }
    
    FILE *fptr;
    if ((fptr = fopen("Kayit.txt","w+")) == NULL)
        printf("Dosya olusturulamadi!!!");
    fwrite(kayitlar, sizeof(Kayit), KAYIT_SAYISI, fptr);


    Kayit okunan_kayit;
    fseek(fptr, 3 * sizeof(Kayit), SEEK_SET); 
    fread(&okunan_kayit, sizeof(Kayit), 1, fptr);

    printf("Okunan Kayit: %s %s\n", okunan_kayit.ad, okunan_kayit.soyad);
    
    fclose(fptr);

    return 0;
}