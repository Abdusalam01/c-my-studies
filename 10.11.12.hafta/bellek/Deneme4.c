#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int boyut;
    printf("Dizi boyutunu giriniz: ");
    scanf("%d",&boyut);
    int *dizi = (int *)malloc(boyut*sizeof(int)); // bellekten boyut değişkeni kadar yar ayırdık.

    for (int i = 0; i < boyut; i++) // kullanicidan dizi elemanlarini alin
    {
        printf("%d. eleman giriniz : ",i + 1);
        scanf("%d",(dizi + i));
    }
    int toplam = 0;
    for (int i = 0; i < boyut; i++) // Dizi elemanlarinin toplaminin hesaplayin
    {
        toplam += *(dizi + i);
    }
    
    printf("Sayilarin Toplam = %d\n",toplam);
    printf("Sayilarin Ortalama = %d\n",toplam / boyut);
    printf("Sonuc = %.2f\n",(toplam / boyut) * 0.8);

    printf("\nYeni Dizideki tum elemanlar: \n");
    for (int i = 0; i < boyut; i++)
    {
        printf("%d. Eleman = %d\n",i+1,*(dizi + i));
    }
    return 0;
}




