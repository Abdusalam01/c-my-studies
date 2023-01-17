#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {

    FILE *fptr;
    char sehir[50] = "Bursa teknik universitesi kutuphanesi";
    char metin[] = "Bilgisayar Muhendisligine giriz ve Algoritme ve Programlama";
    char metin2[100];
    char x;

    // ------ DOSYAYA VERI YAZ --------
    if ((fptr = fopen("Deneme_1.txt","w")) == NULL)
        printf("Dosya olusturulamadi!!!");

    fprintf(fptr,"Bursa teknik universitesi bilgisayar muhendislgi bolumu 2.sinif ogrencisi\n");
    
    for (int i = 0; i < strlen(sehir); i++)
    {
        fputc(sehir[i],fptr);
    }
    fprintf(fptr,"\n");
    int boyut = fwrite(metin, 1, sizeof(metin), fptr);

    char y;
    fseek(fptr,0,SEEK_SET);
    while (1)
    {
        y = fgetc(fptr);
        if (y == EOF)   break;
        if (y == 't')
        {
            fseek(fptr,-1,SEEK_CUR);
            fputc('T',fptr); break;
        }
        
    }
    
    
    fclose(fptr);


    // ******   DOSYADAN VERI OKU   *******
    if ((fptr = fopen("Deneme_1.txt","r+")) == NULL)
        printf("Dosya Okuma Basarisiz!!!");
    
    while (1)
    {
        if (x == EOF)
            break;
        x = fgetc(fptr);
         printf("%c",x);
    }
    fseek(fptr,0,SEEK_SET);
    int boyut2 = fread(metin2,1,100,fptr);

    fclose(fptr);


    printf("\nBoyutu: %d\n\n",boyut);


    printf("\nDosyadan %d byte veri okundu, Dosyadan Okunan Veriler: \n",boyut2);
    for (int i = 0; i < boyut2; i++)
    {
        printf("%c",metin2[i]);
    }
    printf("\n\n");
    

    return 0;
}