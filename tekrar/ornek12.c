#include<stdio.h>
#include<stdlib.h>


int main()
{
    int elemanNo,toplam=0,say=0; 
    char isim[10],st1[11];
    float aylikSatis,ortalama;

    FILE *dosyaoku=fopen("sayislar.txt","w");

    printf("\nSatis elemaninin numarasini giriniz: ");
    while (scanf("%d",&elemanNo)!=0)
    {
        printf("\nSatis elemaninin adini giriniz: ");
        scanf("%s",isim);
        printf("\nSatis miktarini giriniz: ");
        scanf("%f",&aylikSatis);
        fprintf(dosyaoku,"%4d %10s %.2f\n",elemanNo,isim,aylikSatis);
        printf("\nSatis elemaninin numarasini giriniz: ");
    }
    fclose(dosyaoku);
    dosyaoku=fopen("sayislar.txt","r");

    while (!feof(dosyaoku))
    {
        fscanf(dosyaoku,"%4d",&elemanNo);
        fscanf(dosyaoku,"%10s",isim);
        fscanf(dosyaoku,"%f",&aylikSatis);
        printf("\n%4d %10s %.2f\n",elemanNo,isim,aylikSatis);
        toplam=toplam+aylikSatis;
        say++;
    }
    fclose(dosyaoku);
    ortalama=toplam/say;
    printf("\nsatis ortalamasi %.2lf\n",ortalama);
    return 0;
}