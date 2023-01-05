#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ekle_cikar(int boyut, int *dizi);
void toplamHesapla(int boyut, int *dizi);

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

    toplamHesapla(boyut,dizi);

    printf("\n\n");
    // kullanici diziye eleman eklemek isteyip istemedigini sorun.
    char harf[1];
    printf("Eleman eklemek yada cikarmak istiyormusunuz (E yada H) : ");
    scanf(" %s",harf);

    if (strcmp(harf,"E") == 0 || strcmp(harf,"e") == 0) {
        ekle_cikar(boyut, dizi);
    }        
    else if (strcmp(harf,"H") == 0 || strcmp(harf,"h") == 0)
        printf("Denediginiz icin tesekkur ederiz.\n");
    else
        printf("Hatali giris yaptiniz...!\n");
    
    return 0;
}

void toplamHesapla(int boyut, int *dizi){
    int toplam = 0;
    for (int i = 0; i < boyut; i++) // Dizi elemanlarinin toplaminin hesaplayin
    {
        toplam += *(dizi + i);
    }
    
    printf("Sayilarin Toplam = %d\n",toplam);
    printf("Sayilarin Ortalama = %d\n",toplam / boyut);
    printf("Sonuc = %.2f\n",(toplam / boyut) * 0.8);
}

void ekle_cikar(int boyut, int *dizi){

    int ekistira,karar;
    printf("Elemen eklemek icin 1'i giriniz, Cikarmak icin 2'yi giriniz: ");
    scanf("%d",&karar); printf("\n\n");

    if (karar == 1) {  // kullanicinin diziye eleman eklemek istediği zaman calisir.
        printf("Kac eleman eklemek istiyorsunuz: "); // kac eleman eklemek istedigini sorun
        scanf("%d",&ekistira);
        dizi = (int *)realloc(dizi,(boyut + ekistira)*sizeof(int)); // onceden boyut degiskeni kadar bellektan ayrilan yere ekistira degiskeni kadar bellek alanı ekler.
        
        // Ekistira degiskeni kadar diziye eleman ekleyin:
        for (int i = boyut; i < boyut +ekistira; i++)
        {
            printf("%d. eleman giriniz : ",i + 1);
            scanf("%d",(dizi + i));
        }
        printf("\nYeni Dizideki tum elemanlar: \n");
        for (int i = 0; i < boyut + ekistira; i++)
        {
            printf("%d. Eleman = %d\n",i + 1,*(dizi + i));
        }
                printf("\nYeni toplama hesabi: \n");

        toplamHesapla(boyut + ekistira,dizi);

    }
    else if (karar == 2){ // kullanicinin diziden eleman cikarmak istedigi zaman calisir.
        printf("Kac eleman cikarmak istiyorsunuz: "); // kac eleman cikarmak istedigini sorun
        scanf("%d",&ekistira);  printf("\n\n");

        printf("\nYeni Dizideki tum elemanlar: \n");
        for (int i = 0; i < boyut - ekistira; i++)
        {
            printf("%d. Eleman = %d\n",i,*(dizi + i));
        }
        printf("\nYeni toplama hesabi: \n");
        toplamHesapla(boyut - ekistira,dizi);
    }
}
