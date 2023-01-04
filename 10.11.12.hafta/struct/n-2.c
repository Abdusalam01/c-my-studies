#include<stdio.h>
#include <stdlib.h>
enum eBolum {
    programcilik=1, // *1
    donanim,        // *2
    muhasebe,       // *3
    motor,          // *4
    ticaret         // *5
} bolum_degiskeni;
enum cinsiyet {Erkek,Kadin} c;
enum calisma_durumu {Issiz, Calisan, Oogrenci, Emekli} d;
enum evlilik_durumu {Bekar,Evli} e;
enum egtim_durumu {Ilkokul, Lise, OnLisans, Lisans, LisansUstu} eg;
int main()
{
    bolum_degiskeni=donanim;
    printf("deger %d\n",bolum_degiskeni);
    bolum_degiskeni+=2;
    printf("yeni deger %d\n",bolum_degiskeni);

    
    return 0;
}
