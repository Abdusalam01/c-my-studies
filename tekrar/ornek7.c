#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    int karakter,kelime,kayit;
    FILE *dosyaOku=fopen("dosya_yaz.txt","r");
    karakter=0; kelime=0; kayit=0;
    while (!feof(dosyaOku))
    {
        ch=fgetc(dosyaOku);
        if (ch=='\n')
            kayit++;
        else if (ch==' ')
            {   kelime++;    karakter++;  }
        else
            karakter++;
    }
    printf("\nKarakter sayisi : %d",karakter);
    printf("\nKelime sayisi : %d",kelime);
    printf("\nKayit sayisi : %d",kayit);
    fclose(dosyaOku);
    return 0;
}