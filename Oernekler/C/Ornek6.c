#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void harf_adedi_bul(char *ptr);

int main(int argc, char *argv[]){
    char *metin = (char *)malloc(100*sizeof(char));

    printf("Metini Giriniz: ");     
    scanf("%[^\n]%*c",metin);
    harf_adedi_bul(metin);
    
}

void harf_adedi_bul(char *ptr){
    int boyut = strlen(ptr);
    int enfazlaHarf = 0;
    char harfN;
    
    for(int i = 0; i < boyut ;i++){
        ptr[i] =tolower(ptr[i]);
    }
    int i = 0, adet = 0;
    printf("Metin boyutu: %d\n",boyut);
    char harf = 'a';

    while (harf <= 'z')
    {
        i = 0;
        adet = 0;
        while (i < boyut)
        {
            if(harf == ptr[i])
                adet++;
            i++;
        }
        if(adet != 0)
            printf("\n%c %d adet", harf,adet);
        if (enfazlaHarf < adet)
        {
            enfazlaHarf = adet;
            harfN = harf;
        }
        
        harf++;
    }

    printf("\nEn fazla olan harf: %c\tAdet: %d\n",harfN,enfazlaHarf);
    
}
