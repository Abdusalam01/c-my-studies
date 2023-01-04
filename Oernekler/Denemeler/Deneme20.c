#include <stdio.h>
#include <stdlib.h>

int main() {

    int satis_miktari = 0;
    int prim = 0;

    printf("Haftalik satis miktarini giriniz: ");
    scanf("%d",&satis_miktari);

    prim = 200 + satis_miktari * 0.09;

    printf("Bu haftalik maas: %d",prim);



    
    return 0;
}