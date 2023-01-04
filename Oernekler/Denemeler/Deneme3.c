#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, ciftSayilarToplami = 0, tekSayilarinToplami = 0;
    printf("N degerini giriniz: ");
    scanf("%d",&n);

    int i;
    for ( i = 0; i < n; i++)
    {
        int sayi;
        printf("Sayi : ");  scanf("%d",&sayi);

        if (sayi%2 == 0)
            ciftSayilarToplami += sayi;     
        else
            tekSayilarinToplami += sayi;
    }
    printf("Cift sayilarin toplami : %d\n",ciftSayilarToplami);
    printf("Tek sayilarin toplami  : %d\n",tekSayilarinToplami);

    
}