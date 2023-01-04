#include<stdio.h>
#include<stdlib.h>
int basamak_bul(int x) //  --> fonkisyon tanimi
{
    int b,toplam=0;
    while (x)
    {
        b=x%10;
        toplam++;
        x=x/10;
    }
    return (toplam);   
}
int main()
{
    int a,t;
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&a);
    t=basamak_bul(a); //    --> fonkisyon cagirma.
    printf("Basamak sayisi: %d",t);
    return 0;
}