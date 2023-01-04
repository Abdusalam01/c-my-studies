#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ad[20];

    printf("Lutfen metin giriniz: ");
    gets(ad);

    printf("Tek tek karekterleri yazdir: \n");

    int i;
    strcmp(metin1,metin2);
    for (i = 0; i < strlen(ad); i++)
    {
        printf("%c\n",ad[i]);
    }
    
    printf("Tum karakterleri yazdir: ");
    for (int i = 0; i < strlen(ad); i++)
    {
        printf("%c",ad[i]);
    }
    printf("\nKarakterleri tersten yazdir: ");
    for (int i = strlen(ad); i >= 0; i--)
    {
        printf("%c\n",ad[i]);
    }
    
    
    printf("\n\nGirilen karakterin uzunlugu: %d\n",i);
    
    return 0;
}