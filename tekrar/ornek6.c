#include<stdio.h>
#include<stdlib.h>


int main()
{
    int mt1,mt2,final,donemnotu;
    char ad[15];

    FILE *dosyaOku=fopen("ogrenci.txt","r");
    FILE *yazdosya=fopen("dosya_yaz.txt","w");
    
    if (dosyaOku==NULL)
        printf("Dosya olusturulmadi!!!");
    else
        
        while (fscanf(dosyaOku,"%s %d %d %d\n",ad,&mt1,&mt2,&final) != EOF)
            {
                donemnotu=(mt1*0.25)+(mt2*0.25)+(final*0.50);
                printf("%s Donem sonu notu %d\n",ad,donemnotu);
                fprintf(yazdosya,"%s: %d\n",ad,donemnotu);// öğrencinin adı ve donem notunu yazdosya adli pointira atar ve dosya_yaz.txt dosyasina yazar.
            }feof(dosyaOku);
    
    fclose(dosyaOku);
    
    return 0;
}