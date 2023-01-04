#include<stdio.h>
#include<stdlib.h>
int faktoriel(int k);
int kombinasyon(int n,int r);
int main()
{ 
    int k,s,cevap;
    printf("Iki tamsayi giriniz: ");
    scanf("%d%d",&k,&s);//          ---> burdan alan degeri kombinasyon fonkisyonuna dondurur.
    cevap=kombinasyon(k,s); //      ---> fonkisyonu cagir
    printf("kombinasyon = %3d",cevap);/*  ---> kombinasyon fonkisyonu islemleri bittiktan sonra 
                                            kombinasyon sonuc cevap degiskenine atanir ve printf ile ekrana yazilir.*/
    return 0;
}
int faktoriel(int k)//---> faktoriel fonkisyonu'nun tanimi.
{
    int i , s=1;
    for ( i = 1; i <= k; ++i)
        s*=i;
    return (s);// ---> fonkisyon s degerini cagirildi yere dondorur.    
}
int kombinasyon(int n,int r)// kombinasyon fonkisyonu'nun tanimi.
{
    int s;
    s=faktoriel(n)/(faktoriel(r)*faktoriel(n-r));
    return (s);
}