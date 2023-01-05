/*    **** DİNAMİK BELLEK FONKİSYONU ****
    
    void *malloc(size_t eleman_sayısı); -->Bellekte her biri size_t tipindeolan eleman_sayısı kadar yer ayırır.
                                        Bu yer verilmezse NULL gönderir.
    void *calloc(size_t eleman_sayısı, size_t nbayt); --> Bellekte her biri nbayt kadar yer işgal edecek eleman_sayısı kadar boş 
                                        yer ayırır ve bütün bitleri sıfırlar. Bu yer ayrılamazsa geriye NULL gönderir.
    void *realloc(void *ptr, size_t nbayt); --> ptr işaretçisi ile gösterilen bellekbloğunu, nbayt kadar büyüterek veya 
                                        küçülterek değiştirir. Bu iş gerçekleşmezse geriye NULL gönderir.
    void free(void *ptr); --> Daha önce ayrılan adresi ptr'de saklanan bellek alanının boşaltır.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sayi,ekistira,toplam=0;
    printf("kac adet sayi gireceksiniz? "); 
    scanf("%d",&sayi);
    
    // int *dizi=(int *)calloc(sayi,sizeof(int))
    int *dizi=(int *)malloc(sayi*sizeof(int)); // bellek ten sayi degiskeni kadar yer tahsil etmek için malloc fonkisyonu kullanıldı.
                                                // malloc fonkisyou int tipinde veri döndürmesi için başina (int *) atandı.
                                                // sizeof(int) dizi elemaninin bellekteki tahsil edileceegi bellek sayısını belirler.
    printf("dizinin elemanlerini giriniz: \n");

    for (int i = 0; i < sayi; i++)  // sayi kadar dizi elemanlarini kullanicidan alir.
    {
        printf("dizi[%d]= ",i);
        scanf("%d",(dizi+i));
    }
    for (int i = 0; i < sayi; i++) // dizinin içindeki elemanları toplar.
    {
        toplam+=*(dizi+i);
    }
    printf("toplam= %d \n",toplam);
    
    // kullanıcı dizi elemanına yeni elemanlar eklemak isterse.
    printf("kac eleman eklemek istiyorsunuz? ");
    scanf("%d",&ekistira);

    dizi=(int *)realloc(dizi,(sayi+ekistira)*sizeof(int)); // kullanıcı dizi elemanlerını realloc fonkisyonuyla tekrar artırabirlir.

    for (int i = sayi; i < sayi+ekistira; i++)
    {
        printf("dizi[%d]= ",i);
        scanf("%d",(dizi+i));
    }
    printf("yeni toplam hesabi: \n");
    toplam=0;
    for (int i = 0; i < sayi+ekistira; i++) // dizinin içindeki elemanları toplar.
    {
        toplam+=*(dizi+i);
    }
    printf("toplam= %d \n",toplam);

    printf("dizi[0]= %d \n",dizi[0]);
    free(&(*dizi[0])); // dizi[0]'ın içindeki elemanı temizle.

    printf("\ntemizlendikten sonraki dizi[0]= %d \n",dizi[0]);
    printf("Dizi elemanlari: \n");

    for (int i = 0; i < sayi + ekistira; i++)
    {
        printf("dizi[%d] : %d\n",i,*(dizi + i));
    }
    



/*
    • malloc() fonksiyonu tahsis ettiği bellekteki bölgelere herhangi bir ilk değer atama işlemi uygulamaz.
    • Yani bellekteki değerleri ile beraber size tahsis eder, ilk değer atama işlemi yazılımcıya kalmıştır.
    • calloc() fonksiyonu bellek tahsisatı yaparken malloc() fonksiyonunu kullanır.
    • Farklı olarak ayırdığı bellek bölgesini sıfırlamaktadır
*/
    return 0;
}