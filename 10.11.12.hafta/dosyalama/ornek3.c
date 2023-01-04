#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr_kaynak,*fptr_hedef;

    fptr_kaynak=fopen("ogrenci_bilgi.txt","r");

    if (fptr_kaynak==NULL)
        printf("ogrenci_bilgi.txt dosyasi acilamadi!");
    else{
        fptr_hedef=fopen("ogrenci_bilgi_kopya.txt","w");

        if (fptr_hedef==NULL)
            printf("kopya dosya olusturulamadi!");

        else{
            char temp;
            while (!feof(fptr_kaynak))// dosyanın sonuna gelinmedigi sürece döngü çalışır.
            {
                temp=fgetc(fptr_kaynak);/* her bir döngüde kaynak dosyadan bir karakter çek ve onu temp degişkenine yazdır,
                                         ve bunu kaynak dosyanın sonuna gelene kadar yapar.*/
                if (temp!=EOF)// dosyanın sonuna gelmediyse yazdır.
                    fputc(temp,fptr_hedef);//
            }
        }
        fclose(fptr_hedef);
    }    
    fclose(fptr_kaynak);

    return 0;
}