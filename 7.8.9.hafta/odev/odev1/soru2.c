/*
    >>>> Ad / Soyad: Abudureyimu Abudusalamu
    >>>> Ogrenci No: 21360859109
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5]={1,2,3,4,5};    
    int indis[5];
    int sayac=0,aranan;
    // bu komut kullanicidan aranmasini istedigi sayiyi alir.
    printf("Aranacak sayiyi giriniz: ");
    scanf("%d",&aranan);
    
    // bu dongu girilen sayinin dizi icinde olup olmadigini arar.
    for(int i=0;i<5;i++)
        if(aranan==arr[i])
            indis[sayac++]=i;
    // bu dongu girilen sayi dizi icinde var ise dizinin kacinci indiste oldugunu ekrana yazar.
    for(int i=0;i<sayac;i++)
        printf("dizideki indisi: %d\n",indis[i]);
    
    // eger girilen sayi dizi elemanlarinda bulunmazsa ekrana -1 yazilmasi icin bu komut calisir.
    if (aranan>5)
    {
        printf("-1 \n"); 
        printf("1~5 arasi sayi giriniz\n");
    }       
               
    return 0;
}