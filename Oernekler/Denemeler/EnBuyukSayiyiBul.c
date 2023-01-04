#include <stdio.h>
#include <stdlib.h>

int main() {
    int s1,s2,s3;
    int buyuk,kucuk;
    printf("Sayilari giriniz: ");
    scanf("%d",&s1);  scanf("%d",&s2);  scanf("%d",&s3);

    buyuk = (s1>s2 && s1>s3) ? s1: (s2>s1 && s2>s3) ? s2 : s3;
    kucuk = (s1<s2 && s1<s3) ? s1: (s2<s1 && s2<s3) ? s2 : s3;

    printf("Sonuc: %d\n",buyuk);
    printf("Sonuc: %d\n",kucuk);
    
    return 0;
}