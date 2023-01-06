#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    /*---------------------- Bir dosyanın içeriğini başka bir dosyaya kopyalama. ----------------------------*/
    FILE *dosya1,*dosya2;
    if ((dosya1 = fopen("Ornek5.txt","r")) == NULL)
    {
        printf("Ornek6.txt Dosyasi Acilamadi...!!!");
        exit(1);
    }
    if ((dosya2 = fopen("Ornek6.txt","w")) == NULL)
    {
        printf("Ornek6.txt Dosyasi Acilamadi...!!!");
        exit(1);
    }
    char x;
    // bir dosyayi diger dosyaya kopyalayan kod.
    while (1)
    {
        x = fgetc(dosya1);
        if (x == EOF) break;

        fputc(x,dosya2);
    }
    fclose(dosya2);
    fclose(dosya1);
    


    return 0;
}