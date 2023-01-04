#include <stdio.h>
#include <stdlib.h>

int kitleIndeks(float boy, int kilo);

int main() {
    float boy;
    int kilo;
    printf("Boyunuzu giriniz: ");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz: ");
    scanf("%d",&kilo);
    int sonuc = kitleIndeks(boy,kilo);
    
    if (sonuc < 18)
        printf("Zayif\n");
    else if (sonuc < 25)
        printf("Normal\n");
    else if (sonuc < 30)
        printf("Kilolu\n");
    else
        printf("Obez\n");
    
    
    return 0;
}

int kitleIndeks(float boy, int kilo){
    int vki = kilo / (boy * boy);
    return vki;
}
