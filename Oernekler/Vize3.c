#include <stdio.h>
#include <stdlib.h>

int main() {
    int matris[7][7];
    int sayi = 0;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0;  j< 7; j++)
        {
            sayi++;
            matris[i][j] = sayi;
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    int sutun, satir, satir_baslangici, sutun_baslangici;
    printf("Istediginiz matris satir sayisi: ");
    scanf("%d",&satir);
    printf("Istediginiz matris sutun sayisi: ");
    scanf("%d",&sutun);
    printf("Istediginiz matris satir baslangici(1'den baslar): ");
    scanf("%d",&satir_baslangici);
    printf("Istediginiz matris sutun baslangici(1'den baslar): ");
    scanf("%d",&sutun_baslangici);
    
    satir_baslangici--;
    sutun_baslangici--;

    if (satir > satir_baslangici && (sutun + sutun_baslangici) < 8)
    {
        for (int i = 0; i < satir; i++)
        {
            for (int j = 0; j < sutun; j++)
            {
                printf("%d\t",matris[satir_baslangici + i][sutun_baslangici + j]);
            }
            printf("\n");
        }
    }
    else
        printf("Istediginiz matris olusturulamadi!\n\n");  

      
    return 0;
}