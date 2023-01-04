#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *i,int *j){
    int temp=*i; // i=5

    *i=*j; // i=8, j=8
    *j=temp; // j=5;
    printf("A : %d   B : %d\n",*i,*j);
}
int main()
{
    // int, float, char... vb gibi tipteki degişkenlerin kaç bayt yer kapladığını görmek için sizeof parametresini kullanabiliriz
    // öenek:     printf("%lu byte",sizeof(int));    int veri tipinin bellekte kaç baytlık yer tuttuğunu ekrana yazar.
    //  printf(" %lu byte", sizeof(char));
    // continue; baştan devam et anlamına gelmekte
    // strlen () fonkisyonu dizinin kaç elemandan oluştugunu ogrenmemize yarar.
    // char isim[]="bursa teknik universitesi";        printf("%lu",strlen(isim));
    
    /*   POİNTİR
    int i=5;
    int *p=&i; // i degişkeninin adresini p pointerina ata.
    printf("%p\n",p);// p isimli pointira atanan adresi yaz.
    printf("%d\n", *p);// p isimli pointira atanan adresteki veriyi yaz.

    (*p)++; // p isimli pointira atanan adresteki sayıyı 1 arttır. yeni deger 6 olacaktir.
    

    char name[]="Ahmet";
    char *p=name;

    for (int i = 0; i < 6; i++)
    {
        printf("%c",*(p+i));
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%c",p[i]);
    }
    */

    int a=5;
    int b=8;
    swap(&a,&b);
    printf("\nA : %d   B : %d\n",a,b);
    
    
    return 0;
}