#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//  Bir karakter dizisini klavyeden okumak için C'nin standart gets( ) fonksiyonu kullanılır.

//  Bir karakter dizisinin uzunluğunu, yani kaç karakter içerdiğini bulmak için C'nin standart strlen() fonksiyonu kullanılır.
//  strlen ()  fonkisyonunu kullana bilmek için #include<string> kütüphanesini ekledim. ve %lu modunu kullandım.
int main()
{
    char dizi[50];
    int i,j;

    printf("Lutfen metni giriniz:");
    gets(dizi);

    printf("\nTek tek yazdir: \n");

    for ( i = 0; dizi[i]; i++)
    printf("%c \n",dizi[i]);

    printf("\nTum karakterleri yazdir: \n%s",dizi);
    printf("\n\n");
    
    printf("Girilen karakterin Uzunlugu : %lu\n", strlen(dizi));
    
    return 0;
}