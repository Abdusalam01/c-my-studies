#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    /*--------------------- Dosyadaki bir harfi başka bir harf ile değiştirme.---------------------------*/
    FILE *dosya1;
    if ((dosya1 = fopen("Ornek5.txt","r+")) == NULL)
    {
        printf("Ornek6.txt Dosyasi Acilamadi...!!!");
        exit(1);
    }
    char x;
    while (1)
    {
        x = fgetc(dosya1);
        if (x == EOF) break;
        if (x == 'X')
        {
            fseek(dosya1,-1,SEEK_CUR);
            fputc('A',dosya1);  
            break;
        } 
    }
    fclose(dosya1);


    
    return 0;
}