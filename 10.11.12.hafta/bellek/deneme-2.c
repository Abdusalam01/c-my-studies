#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *SubString(char *dizikopya, int pozisyon, int uzunluk){

    for (int i = 0; i < uzunluk; i++)
    {
        dizikopya[i]=dizikopya[i+pozisyon];
    }
    dizikopya[uzunluk]='\0';
    dizikopya=(char *)realloc(dizikopya,uzunluk+1);
    return dizikopya;
    
}
int main()
{
    char dizi[100];
    int pozisyon, uzunluk;

    printf("metni giriniz: ");
    gets(dizi);

    char *dizi2=(char *)malloc((strlen(dizi)+1)*sizeof(char));
    strcpy(dizi2,dizi);


    printf("kopyalama pozisyonunu giriniz: ");
    scanf("%d",&pozisyon);

    printf("kopyalama uzunlugunu giriniz: ");
    scanf("%d",&uzunluk);

    char *g=SubString(dizi2,pozisyon,uzunluk);
    printf("kopyalanan metin: ");
    puts(g);
    return 0;
}