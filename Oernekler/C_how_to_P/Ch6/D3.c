#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cumle[50];
    char aranan;
    int poz[49], sayac = 0;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    printf("Aranacak olan karakteri giriniz: ");
    scanf("%c",&aranan);

    for (int i = 0; i < strlen(cumle); i++)
    {
        if (aranan == cumle[i])
        {
            poz[sayac++] = i;
        }
        
    }
     printf("Girilen cumlede %c karakteri %d kere bulundu\n",aranan,sayac);
    for(int i=0;i<sayac;i++)
        printf("Cumledeki indis konumu: %d\n",poz[i]);


    return 0;
}