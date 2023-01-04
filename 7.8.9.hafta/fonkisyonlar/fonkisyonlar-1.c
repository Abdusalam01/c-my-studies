#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int topla(int a)    // ---> fonkisyon tanimi
{
    int i,s;
    s=0;
    for ( i = 0; i <= a; i++)  // ---> fonkisyonun amaci
        s+=i;
    return (s);   
}
int main()
{
    int x,sonuc;
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&x);
    sonuc = topla(x);       // ---> fonkisyon cagirma
    printf("toplam = %d",sonuc);
    return 0;
}
