#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// cümle içerisinde kelime arayan, varsa bulduğu yerin başlangıç indisini ekrana yazan uygulama
int kelimeAra(char *cptr,char *kptr);
int cumle_boyutu(char *cptr);

int main() {
    char cumle[100];
    char kelime[20];
    printf("Cumleyi giriniz: ");
    gets(cumle);
    printf("Kelimeyi giriniz: ");
    scanf("%s",kelime);

    int indis = kelimeAra (cumle, kelime);
    if (indis == -1)
        printf("Aranan kelime cumle icerisinde yoktur...\n");
    else
        printf("Aranan kelime cumlenin %d. indisinde bulunmustur...\n",indis);
    printf("Cumle boyutu: %d",cumle_boyutu(cumle));
    
    return 0;
}

int kelimeAra(char *cptr,char *kptr){
    int boyut1, boyut2;
    boyut1 = strlen(cptr);
    boyut2 = strlen(kptr);
    int i=0,j=0,k=0;
    int sonuc = 1;

    while (i <= (boyut1 - boyut2))
    {
        k = i;
        j = 0;
        sonuc = 1;
        while (j < boyut2)
        {
            if (cptr[k] != kptr[j])
            {
                sonuc = 0;
                break;
            }
            j++;
            k++;
        }
        if (sonuc == 1)
            return i;
        i++;
    }
    
    return -1;
}
int cumle_boyutu(char *cptr){
    return strlen(cptr);
}