#include<stdio.h>
#include<stdlib.h>
int main()
{
    int yas=22;
    printf("\n1.-----------------------------------------------------------\n");
    printf("icerik : %d\n",yas);
    printf("Adress : %p\n",&yas);// yas degiskeni'nin bellekteki adresini döndürür.
    // Bir degişkenin adresine başina & koyarak ulaşabiliriz.
    // Degişkenin adresini ekrana yazdirmak icin %p kullaniyoruz.

    int *pyas; // işaretçi (pointer) taminlama
    pyas=&yas;// yas degiskeni'nin bellekteki adresini pyas pointerine aktarir.
    printf("Adress : %p\n",pyas);// pyas pointerine aktarilan adresi ekrana yazar.

    // Satir 8 ve 14 farklı yontemlerle ayni islemi yapmakta.

    printf("pyas   : %d\n",*pyas);// *pyas yazdigimizda pyas pointerine aktarilan adrese gider 
                                  //                          ve adresteki degeri ekrana yazar.

    printf("\n");printf("2.-----------------------------------------------------------\n");
    *pyas=33; // boyle yaparak adresteki degeri degistire biliriz.
    printf("icerik : %d\n",yas);
    printf("*pyas   : %d\n",*pyas);
    
    printf("&yas : %p\n",&yas);
    printf("pyas : %p\n",pyas);

    printf("\n");
    pyas++; // bir sonraki bellek adresini goster anlamına gelmekte.
    printf("pyas   : %d\n",*pyas); // bellekteki degeri döndürmakte
    printf("Adress : %p\n",pyas); // pointerinin yeni adresini dönkürmakte.

    printf("\n");printf("3.-----------------------------------------------------------\n");
    int *p;
    p=NULL;  /* NULL işaretçi bir sabittir ve hemen hemen tüm dillerde 0’ı değerine sahiptir.  
                p pointerinin adresi 000000000inci bellekte demek yani herhangi bir adrsi göstermedigini ifade etmekte.*/
    printf("p pointerinin adresi   : %p\n",p); // p işaretçinin adresii
    // *p=8; HATA !!! NULL işaretçisinin gösterdiği yere bir değer atanamaz.

    //*** İŞARETÇİ ZİNCİRİ ***
    int **pp;  // pp demeek işaretçinin işaretçisi anlamına gelmekte.

    printf("\n");printf("4.-----------------------------------------------------------\n");
    //*** İŞARETÇİ ARİTMETİĞİ ***
    int dizi[5]={23,24,25,26,27};

    printf("Dizi:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",dizi[i]);
    }

    int *a=&dizi[0];
    for (int i = 0; i < 5; i++)
    {
        printf(" Deger: %d , adresi: %p\n",*(a+i) ,a+i);
    }
    printf("\n");printf("4.-----------------------------------------------------------\n");

    

    return 0;
}