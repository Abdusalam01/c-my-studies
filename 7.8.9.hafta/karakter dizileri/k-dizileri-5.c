#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{//    *** Girilen Cümlede Harf Arama ve Yerini Bulma ***
    char cumle[101];
    char aranan;
    int poz[100],sayac=0;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    printf("Aranacak karakteri giriniz: ");
    scanf("%c",&aranan);

    for(int i=0;i<strlen(cumle);i++)
        if(aranan==cumle[i])
            poz[sayac++]=i;

    printf("Girilen cumlede %c karakteri %d kere bulundu\n",aranan,sayac);
    for(int i=0;i<sayac;i++)
        printf("Cumledeki indis konumu: %d\n",poz[i]);

    return 0;
}