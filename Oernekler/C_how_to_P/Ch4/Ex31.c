#include <stdio.h>
#include <stdlib.h>

int main() {
    int giris,i ,j;

    printf("Bir sayi giriniz: ");
    scanf("%d",&giris);

    int yildiz, bosluk;
    yildiz = 1;
    bosluk = giris - 1;

    for ( i = 0; i < giris; i++)
    {
        for (int k = 0; k < bosluk; k++)
        {
            printf(" ");
        }

        for (j = 0; j < yildiz; j++)
        {
            printf("*");
        }
        yildiz += 2;
        bosluk--;
        printf("\n");
    }

    yildiz = yildiz - 4;
    bosluk += 2;

    for ( i = giris; i > 0; i--)
    {
        for (int k = bosluk; k > 0; k--)
        {
            printf(" ");
        }

        for (j = yildiz; j > 0; j--)
        {
            printf("*");
        }
        yildiz -= 2;
        bosluk++;
        printf("\n");
    }


    
    return 0;
}