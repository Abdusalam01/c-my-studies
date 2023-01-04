#include <stdio.h>
#include<stdlib.h>
int main()
{
    float ogrenci_notu[8];
    float i[8];
    float x;
    for (int i = 0; i < 8 ; i++)
    {
        printf("ogrencilerin notu: ");
        scanf("%f",&ogrenci_notu[i]);
    }
    printf("%f\n",ogrenci_notu[0]+ogrenci_notu[1]);
    // Bu dizinin yedinci elemanının değerini ikiye bölüp, oluşansonucu x değişkenine atasaydık
    x=ogrenci_notu[6]/2;
    printf("x degeri: %f\n",x);
    /* --> Dizinin yedinci elemanı ile yedinci dizi elemanı arasındaki farkı önemlidir.
     Dizi indisleri 0’dan başladığı için “dizinin yedinci elemanı” 6 indisine sahiptir.
     ”yedinci dizi elemanı” ise 7 indisine sahiptir ve aslında dizinin sekizinci elemanıdır.
    */

    /* --> Bir dizi, doğal olarak bazı veriler içerecektir.

       örnek:
       float kutle[5] = { 8.471, 3.683, 9.107, 4.739, 3.918 }; 
       int maliyet[3] = { 25, 72, 94 };

       * Küme parantezleri sonlandırıcı ; karakteri ile bitmektedir.
-----------------------------------------------------------------------------------------------------------------
       --> Bir dizinin uzunluğu belirtilmeden de başlangıç değeri atamak mümkündür.
       Örnek:
       int a[] = { 100, 200, 300, 400 };
       float v[] = { 9.8, 11.0, 7.5, 0.0, 12.5};

       * Derleyici bu şekilde bir atama ile karşılaştığında,
       küme parantezi içindeki eleman sayısını hesaplar ve dizinin o uzunlukta açıldığını varsayar.
       Yukarıdaki örnekte, a dizisinin 4, v dizisinin 5 elemanlı olduğu varsayılır.
-----------------------------------------------------------------------------------------------------------------
       --> Dizilere başlangıç değeri atarken, tüm elemanlara değer vermeden de atama yapmak mümkündür.
       Örnek:
       int sayilar[20] = {0};
       Tüm dizi elemanlarına 0 değeri atanır...
       int sayilar[20] = {1, 2, 3};
       Dizinin ilk 3 elemanına 1, 2 ve 3 değerleri atanır. 4’ten itibaren olan dizi elemanlarına 0 değeri atanır...

       * Sayısal tipteki dizi elemanlarına 0 değeri, metin tipindeki dizi elemanlarına NULL değeri atanır.
-----------------------------------------------------------------------------------------------------------------
    */

    /* --> DİZİ ATAMALARI
    int x[5];              //5 elemanlı sayısal x dizisi
    int i = 2;    
    x[0]=20;             //Geçerliatama
    x[2.3]=5;           //Geçersizatama
    x[2*i – 3] = 3;    // Geçerli atama, x[1] dizi elemanına 3 değerini atar
    x[i++];           // Önce x[2] dizi elemanına erişilir daha sonra i değişkenine 3 değeri atanır
    x[(int)x[1]];    //x[3]dizi elemanına erişilir
    */

    return 0;
}