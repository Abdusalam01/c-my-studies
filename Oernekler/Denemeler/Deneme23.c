#include <stdio.h>
#include <string.h>

int main() {
    char metin[50];
    char harf;
    printf("Metini giriniz: "); gets(metin);
    printf("Aranancak harfi giriniz: "); scanf("%c",&harf);

    for (int i = 0; i < strlen(metin); i++)
    {
        if (metin[i] == harf)
        {
            for (int j = i; j < strlen(metin) ; j++)
            {
                printf("%c",metin[j]);
            }
        }
        else 
            break;
    }
    
    
    return 0;
}